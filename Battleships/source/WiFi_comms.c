#include "WiFi_comms.h"

// Sends ready signal and listens for ready signal from opponent.
// First person ready gets to start. Returns 1 if starting.
int readyUp(){
	int starting;
	char data_in[1], data_out[1];

<<<<<<< HEAD


  	if(receiveData(data_in, 1)>0){
  		starting = 0;

			// If a message of 1 is received the receiver was second ready
  	} else {
  		starting = 1;
  		data_out[0] = 1;
  		sendData(data_out, 1);



=======
	/*// Sends the signal
	data_out[0] = 0;
	sendData(data_out, 1);*/
  
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
>>>>>>> WiFi
	/*// If a message was received, you were not the first one ready
		starting = 0;
	} else{
	// If no message received you are first and are starting, you signal that
		starting = 1;
		// Sends the signal
		data_out[0] = 0;
		sendData(data_out, 1);*/
	}
	return starting;
}
<<<<<<< HEAD
=======

>>>>>>> WiFi
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
	char data_in[2];

	//Listen for data from opponent
	while(receiveData(data_in, 2) != 2){
<<<<<<< HEAD
		//receiveData(data_in, 2);
=======
		receiveData(data_in, 2);
>>>>>>> WiFi
	}
	*x = data_in[0] - 48;
	*y = data_in[1] - 48;
}

// Sends "Hit" or "Miss" response in reaction to a guess from opponent
// Hit = 1, Miss = 0
void sendHitMiss(char HorM){
	char data_out[1];
<<<<<<< HEAD
	int out;
	if(HorM == 'h') {
		out = 1;
	} else {
		out = 0;
	}
	data_out[0] = (char)out+48;
=======

	data_out[0] = HorM;
>>>>>>> WiFi
	sendData(data_out, 1);
}

// Listens for and receives "Hit" or "Miss" response
// Hit = 1, Miss = 0
int receiveHitMiss(){
	char data_in[1];
	int hitOrMiss;
	/*
	while(data_in[0] != 'h' || data_in[0] != 'm'){
		receiveData(data_in, 1);
	}*/
	while(receiveData(data_in, 1)!=1) {

<<<<<<< HEAD
	}
	hitOrMiss = data_in[0] - 48;

	/*
	if(data_in[0] == 'h') hitOrMiss = 1;
	else hitOrMiss = 0;
*/
	return hitOrMiss;
}
=======
	while(data_in[0] != 'h' || data_in[0] != 'm'){
		receiveData(data_in, 1);
	}
	if(data_in[0] == 'h') hitOrMiss = 1;
	else hitOrMiss = 0;

	return hitOrMiss;
}


>>>>>>> WiFi
