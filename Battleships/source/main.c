/*
 * Template Nintendo DS
 * May 2011
 */

#include <nds.h>
#include <stdio.h>
#include "WiFi_minilib.h"


int main(void) {
	
    consoleDemoInit();
    printf("\nHello World!\n");

    while(1)
        swiWaitForVBlank();	
}
