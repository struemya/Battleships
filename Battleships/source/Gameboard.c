/*
 * Gameboard.c
 *
 *  Created on: Jan 5, 2018
 *      Author: nds
 */
#include "Gameboard.h"
#include <stdlib.h>
Gameboard* new_Gameboard() {

	Gameboard* gameboard = (Gameboard*) malloc(sizeof(Gameboard));
	gameboard->shipCount =0;
	return gameboard;
}
void addShip(Gameboard* gameboard, Ship* ship) {
	gameboard->ships[gameboard->shipCount] =ship;
	gameboard->shipCount++;
}

void clearBoard() {
		int i;
		for (i=0;i<10*10;i++) {
			SetMap10x10To(i,0);
		}
	}
void draw(Gameboard* gameboard) {
	int i;
	clearBoard();
	for(i=0;i<gameboard->shipCount;i++){
					drawShip(gameboard->ships[i]);
				}
}
void tryToMoveShipTo(Gameboard* gameboard, Ship* ship, int x, int y){
	if(originDistance(ship,x,y)==1) {
		int i;
		int overlapping;

		for(i=0;i<gameboard->shipCount-1;i++){
			overlapping = isOverlapping(gameboard->ships[i],ship);
			if (overlapping) return;
		}
		ship->xOrigin =x;
		ship->yOrigin =y;

	}


void drawBoard(Gameboard* gameboard) {
	int i;

	for(i=0;i<gameboard->shipCount;i++){
				drawShip(gameboard->ships[i]);
			}
}




}

