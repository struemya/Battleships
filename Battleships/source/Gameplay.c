/*
 * Gameplay.c
 *
 *  Created on: Jan 5, 2018
 *      Author: nds
 */
#include "Gameplay.h"
#include "Gameboard.h"

Gameboard* gameboard;
Ship* activeShip;


void placeShips() {
Ship* ship =new_Ship(2);
activeShip =ship;
addShip(gameboard,activeShip);
draw(gameboard);
//tryToMoveShipTo(gameboard,activeShip,2,0);
//draw(gameboard);



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
        	placeShips();
            return;
        default:
            break;


    }
    tryToMoveShipTo(gameboard,activeShip,x,y);
    draw(gameboard);

}
