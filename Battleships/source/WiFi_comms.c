#include "timers.h"
#include "WiFi_comms.h"


// Sends ready signal and listens for ready signal from opponent.
// First person ready gets to start. Returns 1 if starting.
int readyUp(){
	int starting;
	char data_in[1], data_out[1];



  	if(receiveData(data_in, 1)>0){
  		starting = 0;

			// If a message of 1 is received the receiver was second ready
  	} else {
  		starting = 1;
  		data_out[0] = 1;
  		sendData(data_out, 1);



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
// Sends the coordinates of a pressed square to the opponent.
// Current function only works with x and y in range 0-9
void sendValues(int x, int y){
	char data[2];

	data[0] = (char)x+48;
	data[1] = (char)y+48;
	sendData(data, 2);
}

// Listens for and receives coordinates from the opponent
// Current function only works with x and y in range 0-9
int receiveValues(int* x, int* y){
	char data_in[2];
	int temp = timeout;
	//Listen for data from opponent
	while(receiveData(data_in, 2) != 2 ){
		//receiveData(data_in, 2);
		if(timeout!=temp) return -1;
	}
	*x = data_in[0] - 48;
	*y = data_in[1] - 48;
	return 1;
}

// Sends "Hit" or "Miss" response in reaction to a guess from opponent
// Hit = 1, Miss = 0
void sendHitMiss(int out){
	char data_out[1];
	data_out[0] = (char)out+48;
	sendData(data_out, 1);
}

// Listens for and receives "Hit" or "Miss" response
// Hit = 1, Miss = 0
int receiveHitMiss(){
	char data_in[1];
	int hitOrMiss;
	//int temp = timeout;
	//Listen for data from opponent
	while(receiveData(data_in, 2) != 1){
		//if(timeout!=temp) return -1;
	}
	hitOrMiss = data_in[0] - 48;
	return hitOrMiss;
}
