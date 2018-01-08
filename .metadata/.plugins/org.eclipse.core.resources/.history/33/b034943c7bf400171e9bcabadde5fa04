/*
 * Gamestate.c
 *
 *  Created on: Jan 6, 2018
 *      Author: nds
 */
#include "Gamestate.h"
#include "P_Map10x10.h"

enum STATE state = PLACE;
int lock=0; //lock touch screen while it is the opponents turn

int getLock() {
	return lock;
}
void setLock(int pLock) {
	lock=pLock;
	if (!pLock) {
		drawBorder(3); //draw blue border to show that it is your turn
	} else {
		drawBorder(0); //clear border
	}
}
enum STATE getState() {
	return state;
}


void nextState() {
	switch(state) {
	case PLACE:
		state = WAIT;
		break;
	case WAIT:
		state = PLAY;
		break;
	case PLAY:
		state = DONE;
	default:
		state = PLACE;
		break;

	}
}
