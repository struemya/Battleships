/*
 * Template Nintendo DS
 * May 2011
 */

#include <nds.h>
#include <stdio.h>
#include "WiFi_minilib.h"


int main(void) {
	
    consoleDemoInit();

    //Initialize WiFi
    if(initWiFi())
    	printf("WiFi initialised!\n");
    else
    	printf("WiFi initialisation error\n");

    //Open Socket
    if(openSocket())
    	printf("Socket open!\n");
    else
    	printf("Socket error\n");




    while(1)
        swiWaitForVBlank();	
}
