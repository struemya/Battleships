/*
 * Gamestate.h
 *
 *  Created on: Jan 6, 2018
 *      Author: nds
 */

#ifndef GAMESTATE_H_
#define GAMESTATE_H_
enum STATE{
	PLACE,
	WAIT,
	PLAY,
	DONE
};
int getLock();
void setLock(int pLock);
enum STATE getState();
void nextState();
#endif /* GAMESTATE_H_ */
