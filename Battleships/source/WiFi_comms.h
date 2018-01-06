/*
 * WiFi_comms.h
 *
 *  Created on: Jan 4, 2018
 *      Author: nds
 */

#ifndef WIFI_COMMS_H
#define WIFI_COMMS_H


// Sends the coordinates of a pressed square to the opponent.
void sendCoords(int x, int y);
// Listens for and receives "Hit" or "Miss" response
void receiveHitMiss();
// Listens for and receives coordinates from the opponent
void receiveCoords();
// Sends "Hit" or "Miss" response in reaction to a guess from opponent
void sendHitMiss();


#endif /* WIFI_COMMS_H */
