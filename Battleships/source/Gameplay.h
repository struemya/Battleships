/*
 * Gameplay.h
 *
 *  Created on: Jan 5, 2018
 *      Author: nds
 */
#include "Ship.h"
#include "Gameboard.h"
#include "P_Controls.h"
#include "BattlefieldDefines.h"
void placeShips();
void initGameboard();
void Gameplay_handleInput(enum ACTION a);