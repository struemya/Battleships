/*
 */

#include "WiFi_comms.h"

// Sends ready signal and listens for ready signal from opponent.
// First person ready gets to start. Returns 1 if starting.
int readyUp(){
	int starting;
	char data_in[1], data_out[1];
	// Sends the signal
	data_out[0] = 0;
	sendData(data_out, 1);

	if(receiveData(data_in, 1)>0){
		switch(data_in[0]){
		// If a message of 0 is received the receiver was the first to ready up
		// It confirms this by sending a message of 1 to the other
		case 0:
			starting = 1;
			data_out[0] = 1;
			sendData(data_out, 1);
			break;
		// If a message of 1 is received the receiver was second ready
		case 1:
			starting = 0;
			break;
		}
	}
	return starting;
}

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
	int hitOrMiss;

	if(receiveData(data, 1)>0){
		hitOrMiss = data[0] - 48;
	}
	return hitOrMiss;
}

