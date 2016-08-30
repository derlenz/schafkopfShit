/*
 * Player.cpp
 *
 *  Created on: Aug 29, 2016
 *      Author: lenz
 */

#include "Player.h"
#include "../Session.h"

using namespace std;

Player::Player(int i,Session* mySess) {
	this->position = i;
	this->mySession = mySess;

}
Player::Player() {
}
Player::~Player() {
	// TODO Auto-generated destructor stub
}

void Player::whereAmI(){
	vector<Player*> players;
	players = mySession->getPlayers();
	int pos = 0;
	for(vector<Player*>::iterator it = players.begin(); it != players.end(); it++){
		if(this == *it){
			break;
		}
		pos++;
	}
	position = pos;
}

