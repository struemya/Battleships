/*
 * Gameplay.h
 *
 *  Created on: Jan 5, 2018
 *      Author: nds
 */


#ifndef GAMEPLAY_H
#define GAMEPLAY_H


#include "Ship.h"
#include "Gameboard.h"
#include "P_Controls.h"
#include "BattlefieldDefines.h"



void placeShips();
void initGameboard();
void Gameplay_handleInput(enum ACTION a);
void Gameplay_handle_attack(int x, int y);
#endif
