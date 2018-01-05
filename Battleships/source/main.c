/*
 * Template Nintendo DS
 * May 2011
 */

#include <nds.h>
#include <stdio.h>
#include "P_Initializer.h"
#include "Gameplay.h"


int main(void) {
	

    consoleDemoInit();
    printf("Start");
    P_InitNDS();
    initGameboard();
    placeShips();
    while(1) {
    		handleInput();
    		swiWaitForVBlank();
    	}


}
