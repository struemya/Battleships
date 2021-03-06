/*
 * Gamestate.c
 *
 *  Created on: Jan 6, 2018
 *      Author: nds
 */
#include "Gamestate.h"

enum STATE state = PLACE;

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
