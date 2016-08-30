/*
 * Player.h
 *
 *  Created on: Aug 29, 2016
 *      Author: lenz
 */


#ifndef PLAYER_H_
#define PLAYER_H_

#include <string>
#include <vector>
#include "../Structs.h"

using namespace std;

class Session;

class Player {
public:
	Player();
	Player(int,Session*);
	virtual ~Player();
	decision wannaPlay(card cards[8]);
	decision giveCard(vector<card> yourCards, vector<card> curCards);
	void whereAmI();
private:
	player position;
	Session* mySession;

};

#endif /* PLAYER_H_ */
