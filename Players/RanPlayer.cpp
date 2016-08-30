/*
 * RanPlayer.cpp
 *
 *  Created on: Aug 29, 2016
 *      Author: lenz
 */

#include "RanPlayer.h"



using namespace std;

RanPlayer::RanPlayer() {
	// TODO Auto-generated constructor stub

}
RanPlayer::RanPlayer(int i, Session* sess):Player(i, sess) {
	// TODO Auto-generated constructor stub

}

RanPlayer::~RanPlayer() {
	// TODO Auto-generated destructor stub
}

decision Player::wannaPlay(card cards[8]){
	decision myDec;
	myDec.chosenType = (static_cast<IWould>(rand() % IWould_MAX));
	myDec.decider = this->position;
	return myDec;
}
decision Player::giveCard(vector<card> yourCards, vector<card> curCards){
	decision myDec;

	myDec.decider = this->position;
	int answer;
	answer = rand() % yourCards.size();
	answer = yourCards.at(answer);
	cout << "I chose:" << answer << " at random" << endl;
	myDec.playedCard = answer;
	return myDec;
}
