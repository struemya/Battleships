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
int count =0;
int lengths[10]={2,2,2,2,3,3,4,4,5};

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
	int res = attackBoard(gameboard,x,y);

	SetSubMap10x10To(getIndex(x,y),1+res);
	draw(gameboard);
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

        		if(count==9) { //all ships placed
        			nextState();
        			nextState();//skip Wait state
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
