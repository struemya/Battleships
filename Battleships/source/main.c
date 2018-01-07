/*
 * Template Nintendo DS
 * May 2011
 */

#include <nds.h>
#include <stdio.h>
#include "WiFi_minilib.h"
#include "P_Graphics.h"
#include "P_Map10x10.h"
#include "Gameplay.h"


int main(void) {
	
    consoleDemoInit();

    //Initialise WiFi
    if(initWiFi())
    	printf("WiFi initialised!\n");
    else
    	printf("WiFi initialisation error\n");

    //Open Socket
    if(openSocket())
    	printf("Socket open!\n");
    else
    	printf("Socket error\n");

    printf("Start");

	//Initialise the main engine
	P_Graphics_setup_main();

	P_Map10x10_Init(10, 10);

	//Audio_Init();
	//Audio_PlayMusic();

	initGameboard();
    placeShips();

    while(1) {
    	handleInput();
    		swiWaitForVBlank();
    }
}
