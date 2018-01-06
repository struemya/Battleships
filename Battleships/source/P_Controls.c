
#include "P_Controls.h"
#include "BattlefieldDefines.h"
#include "Gameplay.h"

void handleInput()
{
	//Scan the keys
		scanKeys();

		/* Identify the keys and map the action according to the table given in
		 * the manual. Call the function Gameplay_handleInput(..) to send an action
		 * to the logic of the game */
		unsigned keys = keysDown();

		if(keys & KEY_UP) Gameplay_handleInput(UP);
		else if(keys & KEY_DOWN) Gameplay_handleInput(DOWN);
		else if(keys & KEY_LEFT) Gameplay_handleInput(LEFT);
		else if(keys & KEY_RIGHT) Gameplay_handleInput(RIGHT);
		else if(keys & KEY_A) Gameplay_handleInput(SELECT);
		else if(keys & KEY_B) Gameplay_handleInput(FLIP);

}
