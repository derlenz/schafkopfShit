/*
 * Session.h
 *
 *  Created on: Aug 29, 2016
 *      Author: lenz
 */

#ifndef SESSION_H_
#define SESSION_H_

#include "Game.h"
#include "Structs.h"
#include "Players/PlayerInc.h"



class Session {
public:
	Session();
	virtual ~Session();
	vector<Player*> getPlayers();
	void newGame();
	Game *getCurGame();
	void play();
private:
	Game *curGame;
	vector<Player* > players;
	int dealer;
};

#endif /* SESSION_H_ */
