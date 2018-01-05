/*
 * Gameboard.h
 *
 *  Created on: Jan 5, 2018
 *      Author: nds
 */
#ifndef GAMEBOARD_H_
#define GAMEBOARD_H_
#include "Ship.h"
#include "P_Map10x10.h"

#include <stdlib.h>



 typedef struct{
	Ship* ships[10];
	int shipCount;
}  Gameboard;

Gameboard* new_Gameboard();
void clearBoard();
void drawBoard(Gameboard* gameboard);
void addShip(Gameboard* gameboard, Ship* ship);
void tryToMoveShipTo(Gameboard* gameboard, Ship* ship, int x, int y);
void draw(Gameboard* gameboard);
#endif

