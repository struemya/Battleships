/*
 * Template Nintendo DS
 * May 2011
 */

#include <nds.h>
#include <stdio.h>
#include "WiFi_comms.h"
#include "P_Initializer.h"
#include "Gameplay.h"

int main(void) {
	

<<<<<<< HEAD
#ifdef WIFI
=======
    /*
>>>>>>> WiFi
    //Initialise WiFi
    if(initWiFi()) {
    	printf("WiFi initialised!\n");
    }
    else
    	printf("WiFi initialisation error\n");

    //Open Socket
    if(openSocket())
    	printf("Socket open!\n");
    else
    	printf("Socket error\n");
*/

    printf("Start");
#endif

    P_InitNDS();
    initGameboard();
    placeShips();

    // Sends ready signal and listens for the opponents ready signal
    // First person ready gets to start.  Returns 1 if starting.
    readyUp();

    /*	After this we could start the game with something like this
     *
     * if(readyUp())
     * 	guessFirst();
     * else
     * 	waitForGuess();
     */

    while(1) {
    	handleInput();
    		swiWaitForVBlank();
    }
}
