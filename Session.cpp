/*
 * Session.cpp
 *
 *  Created on: Aug 29, 2016
 *      Author: lenz
 */

#include "Session.h"

Player* askForPlayer(int i, Session* sess){
	Player* player;
	cout << " on position " << i << " initialising RanPlayer" << endl;
	player = new RanPlayer(i,sess);
	return player;
}

Session::Session() {
	dealer = 0;
	for(uint i = 0; i < 4;i++){
		players.push_back(askForPlayer(i,this));
	}

}

Session::~Session() {
	// TODO Auto-generated destructor stub
}

void Session::newGame(){
	dealer ++;
	dealer %= 4;
	curGame = new Game(dealer);
}

void Session::play(){
	decision curDecision;
	curDecision.start = 1;
	turn curTurn = curGame->advanceGame(curDecision);
	while(curTurn.curPhase != End){


		curTurn = curGame->advanceGame(curDecision);
	}
}

vector<Player*> Session::getPlayers(){
	vector<Player*> res;
	for(uint i = 0; i < sizeof(players);i++){
		res.push_back(players[i]);
	}
	return res;
}

