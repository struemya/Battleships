/*
 * Ship.h
 *
 *  Created on: Jan 5, 2018
 *      Author: nds
 */
#ifndef SHIP_H_
#define SHIP_H_


#include <stdlib.h>

 typedef struct Ship {
	int xOrigin;
	int yOrigin;
	int horizontal;
	int length;
	int cellsDamaged[5]; // [0,1,0,0,0] means that the second cell of the ship was hit
	int destroyed;

}Ship;


Ship* new_Ship(int length);
void flip(Ship* ship);

int attackShip(Ship* ship, int x, int y);
int isOverlapping(Ship* ship1, Ship* ship2);
int minDistance(Ship* ship, int x, int y);
int originDistance(Ship* ship, int x, int y);
void incrementShipCoordinates(int horizontal, int* shipX,int* shipY);
void drawShip(Ship* ship);
int absMin(int a, int b);
int abs(int a);
int min(int a, int b);

#endif /* SHIP_H_ */
