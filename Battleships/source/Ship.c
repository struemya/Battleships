/*
 * Ship.c
 *
 *  Created on: Jan 5, 2018
 *      Author: nds
 */
#include "Ship.h"

Ship* new_Ship(int length) {
	Ship* ship =(Ship*) malloc(sizeof(Ship));
	ship->length =length;
	ship->xOrigin =0;
	ship->yOrigin =0;
	ship->horizontal=1;
	//ship->cellsDamaged = (int*) malloc(sizeof(int)*length);

	int i =0;
	for(i=0;i<length;i++) {
		ship->cellsDamaged[i] =0;
	}

	return ship;
}
void flip(Ship* ship) {
	if(ship->horizontal) {
		ship->horizontal=0;
	} else {
		ship->horizontal=1;
	}
}
int attackShip(Ship* ship, int x, int y) {
	int offset;
	int i;
	int shipX = ship->xOrigin;
	int shipY = ship->yOrigin;

	for(i=0;i<ship->length;i++) {
		if(shipX==x && shipY==y) {
			ship->cellsDamaged[i] =1;
			return 1;
		}
		incrementShipCoordinates(ship->horizontal,&shipX,&shipY);
	}
	return 0;

}
int isOverlapping(Ship* ship1, Ship* ship2) {
		int shipX =ship2->xOrigin;
		int shipY =ship2->yOrigin;
		int distance;
		int i =0;
		while(i<ship2->length) {
			distance = minDistance(ship1,shipX,shipY);
			if (distance<=1) { //two ships cannot touch each other, hence they need a distance of at least 2
				return 1;
			}
			incrementShipCoordinates(ship2->horizontal, &shipX, &shipY);
			i++;

		}
		return 0;
}

int minDistance(Ship* ship, int x, int y) {
	int i=0;
	int distance=10;
	int temp;
	int shipX =ship->xOrigin;
	int shipY =ship->yOrigin;

	while(i<ship->length) {

		int xMargin =abs(shipX-x);
		int yMargin =abs(shipY-y);
		if (xMargin == 1 && yMargin ==1) temp = 1;
		else temp =xMargin+yMargin;
		distance =min(temp, distance);
		incrementShipCoordinates(ship->horizontal, &shipX, &shipY);
		i++;
	}
	return distance;
}
void incrementShipCoordinates(int horizontal, int* shipX,int* shipY) {
	if (horizontal ==1) {
		*shipX =*shipX+ 1;
	} else {
		*shipY =*shipY+ 1;
	}
}
int originDistance(Ship* ship, int x, int y) {
	return abs(ship->xOrigin-x)+abs(ship->yOrigin-y); //sum of distance to origin
}
int absMin(int a, int b) {
	a =abs(a);
	b =abs(b);
	return min(a,b);
}
int min(int a, int b) {
	if (a < b) return a;
	else return b;
}
int abs(int a) {
	if (a<0) return -a;
	else return a;
}
void drawShip(Ship* ship) {
	int i;
	int shipX =ship->xOrigin;
	int shipY =ship->yOrigin;

	for (i=0;i<ship->length;i++) {
		int index10 = getIndex(shipX,shipY);
		if(ship->cellsDamaged[i]==1){
			SetMap10x10To(index10,2);
		} else {
		SetMap10x10To(index10,1);
		}
		incrementShipCoordinates(ship->horizontal, &shipX, &shipY);
	}

}
int getIndex(int x, int y) {
	return x+10*y;
}
