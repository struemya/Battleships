/*
 * Gameplay.c
 *
 *  Created on: Jan 5, 2018
 *      Author: nds
 */
#include "Gameplay.h"
#include "Gameboard.h"
#include "Gamestate.h"

Gameboard* gameboard;
Ship* activeShip;
const int NUM_CELLS = 2*4+3*2+2*4+5;
const int NUM_SHIPS = 2;
int count =0;
int opponentHitCount = 0;
int ownHitCount = 0;
//int lengths[9]={2,2,2,2,3,3,4,4,5};
int lengths[9]={2,2};
int starting;

void placeShips() {

Ship* ship =new_Ship(lengths[count++]);

addShip(gameboard,ship);

//tryToMoveShipTo(gameboard,ship,0,1);
//tryToMoveShipTo(gameboard,ship,0,2);
//draw(gameboard);
activeShip =ship;

/*
Ship* ship2 =new_Ship(3);

addShip(gameboard,ship2);
tryToMoveShipTo(gameboard,ship2,1,0);
tryToMoveShipTo(gameboard,ship,0,3);*/
draw(gameboard);




}
void Gameplay_handle_attack(int x, int y) {
#ifdef WIFI
	setLock(1);
	sendCoords(x,y);

	int res = 0;
	res = receiveHitMiss();

	opponentHitCount += res; //add 1 to the opponentHitCount if he was hit
	SetSubMap10x10To(getIndex(x,y),1+res); //mark field as hit or missed
	draw(gameboard);

	Gameplay_wait_for_attack();
#endif

#ifndef WIFI
	int res = attackBoard(gameboard,x,y);
	if(res>=0) {
		SetSubMap10x10To(getIndex(x,y),1+res);
		opponentHitCount += res;
	}
	draw(gameboard);
	setLock(0);
#endif
	Gameplay_check_status();
}
void Gameplay_check_status() {

	if(opponentHitCount==NUM_CELLS) {
		nextState();
		drawBorder(1);
	} else if(ownHitCount==NUM_CELLS) {
		nextState();
		drawBorder(2);
	}
}
void Gameplay_wait_for_attack() {
	setLock(1); //disable the touch screen
	int x,y;
	receiveCoords(&x,&y);
	int res = attackBoard(gameboard,x,y);
	ownHitCount+=res; //add 1 to ownHitCount if oppenent hit one of your ships
	char c;
	if(res) {
		c = 'h'; //hit
	} else {
		c = 'm'; //miss
	}
	sendHitMiss(c);

	draw(gameboard);

	Gameplay_check_status(); //check if game is over
	setLock(0);
}

void initGameboard(){
	gameboard =new_Gameboard();
}

void Gameplay_handleInput(enum ACTION a)
{
	int x = activeShip->xOrigin;
	int y = activeShip->yOrigin;

    switch (a)
    {
        case UP:

            y--;
            break;
        case DOWN:

            y++;
            break;
        case RIGHT:
            x++;
            break;
        case LEFT:
            x--;
            break;
        case SELECT:
        	if (!isTooClose(gameboard, activeShip)) {

        		if(count==NUM_SHIPS) { //all ships placed

        			nextState();

					#ifdef WIFI
        			starting = readyUp();
        			nextState();
        			if(!starting) { //if you are not starting you wait to be attacked
        				setLock(1);
        				Gameplay_wait_for_attack();
        			} else {
        				setLock(0);
        			}
					#endif
					#ifndef WIFI
        			setLock(0);
        			nextState();
					#endif
        		} else {
        			placeShips();
        		}
        		return;
        	}

            break;
        case FLIP:
             tryToFlip(activeShip);
             break;
        default:
            break;


    }
    tryToMoveShipTo(gameboard,activeShip,x,y);
    draw(gameboard);

}
