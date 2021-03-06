

#include "P_Controls.h"
#include "Gameplay.h"
#include <nds.h>
#include "Gamestate.h"
#include "BattlefieldDefines.h"
void handleInput()
{
	//Scan the keys
	scanKeys();

	/* Identify the keys and map the action according to the table given in
	 * the manual. Call the function Gameplay_handleInput(..) to send an action
	 * to the logic of the game */
	unsigned keys = keysDown();
	touchPosition touch;
	switch(getState()) {
	case PLACE:
		if(keys & KEY_UP) Gameplay_handleInput(UP);
		else if(keys & KEY_DOWN) Gameplay_handleInput(DOWN);
		else if(keys & KEY_LEFT) Gameplay_handleInput(LEFT);
		else if(keys & KEY_RIGHT) Gameplay_handleInput(RIGHT);
		else if(keys & KEY_A) Gameplay_handleInput(SELECT);
		else if(keys & KEY_B) Gameplay_handleInput(FLIP);



		break;
	case WAIT:
		break;
	case PLAY:

		touchRead(&touch);
		//Identify a valid touched coordinates and print them
		if(touch.px | touch.py) {
			int x = touch.px;
			int y = touch.py;
			x = x / 8; //get Tile number
			y = y / 8;
			x = x - 7;
			y = y - 3;
			x = x / 2;
			y = y / 2;
			Gameplay_handle_attack(x,y);


		}
		break;

	case DONE:
		break;
	}


}
