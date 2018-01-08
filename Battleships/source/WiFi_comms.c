/*
 */

#include "WiFi_minilib.h"

// Sends the coordinates of a pressed square to the opponent.
// Current function only works with x and y in range 0-9
void sendCoords(int x, int y){
	char data[2];

	data[0] = (char)x+48;
	data[1] = (char)y+48;
	sendData(data, 2);
}

// Listens for and receives coordinates from the opponent
// Current function only works with x and y in range 0-9
void receiveCoords(int* x, int* y){
	char data[2];

	//Listen for data from opponent
	if(receiveData(data, 2)>0){
		*x = data[0] - 48;
		*y = data[1] - 48;
	}
}

// Sends "Hit" or "Miss" response in reaction to a guess from opponent
// Hit = 1, Miss = 0
void sendHitMiss(int hitOrMiss){
	char data[1];

	data[0] = (char)hitOrMiss+48;
	sendData(data, 1);
}

// Listens for and receives "Hit" or "Miss" response
// Hit = 1, Miss = 0
int receiveHitMiss(){
	char data[1];
	int hitOrMiss=-1;

	if(receiveData(data, 1)>0){
		hitOrMiss = data[0] - 48;
	}
	return hitOrMiss;
}

