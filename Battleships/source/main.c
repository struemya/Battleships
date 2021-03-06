/*
 * Template Nintendo DS
 * May 2011
 */

#include <nds.h>
#include <stdio.h>
#include "WiFi_minilib.h"
#include "P_Initializer.h"
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

    P_InitNDS();
    initGameboard();
    placeShips();

    while(1) {
    	handleInput();
    		swiWaitForVBlank();
    }
}
