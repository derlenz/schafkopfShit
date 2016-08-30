/*
 * Game.h
 *
 *  Created on: Aug 29, 2016
 *      Author: lenz
 */

#ifndef GAME_H_
#define GAME_H_

#include "Players/Player.h"
#include "Structs.h"


using namespace std;


class Game {
public:
	Game();
	Game( int);
	virtual ~Game();
	turn advanceGame(decision decision);
private:
	vector<IWould> pplsChoice;
	vector<card> cardsPlayed;
	int curTurn;
	Phase curPhase;
	int dealer;
	vector< vector<card> > curPlayerCards;
	vector< vector<card> > startPlayerCards;
	void giveOutCards();
	bool checkDecision(decision); //this would also Advance the current turn
};

#endif /* GAME_H_ */
