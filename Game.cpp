/*
 * Game.cpp
 *
 *  Created on: Aug 29, 2016
 *      Author: lenz
 */

#include "Game.h"
#include <stdlib.h>

using namespace std;

Game::Game() {
	// TODO Auto-generated constructor stub

}
Game::~Game() {
	// TODO Auto-generated destructor stub
}
Game::Game(int startDealer) {
	if (dealer > 3){
		cerr << " startPos of Dealer is wrong @ starting new Game" << endl;
	}
	curTurn = startDealer;
	curPhase = Handout;
	dealer = startDealer;

	giveOutCards();

}

void Game::giveOutCards(){

	vector<card> cards;

	for(int i = 0; i < 32; i++){
		cards.push_back(i);
	}
	for(int mixer = 0; mixer < 200; mixer++){
		//TODO hier srand benutzt oder besseren seed (zeit / datum ?)
		int curRand = rand() % 31; // the last card would not have any effect
		int cardTakenOut = cards.at(curRand);
		cards.erase(cards.begin() + curRand);
		cards.push_back(cardTakenOut);

	}

	for(vector<int>::iterator it = cards.begin(); it != cards.end(); it++){
		cout << *it << ",";
	}
	cout  << endl;
	for(int i = 0; i< 4 ; i++){
		curPlayerCards.push_back(vector<int>());
	}
	vector<int>::iterator cardIt = cards.begin();
	int playerToGiveCard = curTurn ; //starting with the first player
	while(cardIt != cards.end()){
		playerToGiveCard = (playerToGiveCard + 1) %4;
		curPlayerCards[playerToGiveCard].push_back(*cardIt);
		cardIt++;

	}
	//TODO
	cout << "length of cPC (4) is "<< curPlayerCards.size() << endl;
	for(vector<vector<int> >::iterator bigIt = curPlayerCards.begin();
			bigIt != curPlayerCards.end(); bigIt++){
		cout << "cards" << endl;
		for(vector<int>::iterator smallIt = bigIt->begin();
				smallIt != bigIt->end(); smallIt++){
			cout << *smallIt << ",";
		}
		cout << endl;
	}
	curPlayerCards = startPlayerCards;

}

turn Game::advanceGame(decision decision){
	//The decision is what the players before that chose
	//or the information how the game started
	//Choosing the next player
	bool goodDecision = checkDecision(decision);

	turn result;
	switch (curPhase) {
		case Handout:

			break;
		case Asking:

			break;
		case Play:

			break;
		case End:

			break;
		default:
			break;
	}
}

bool Game::checkDecision(decision){
	bool isRight = false;
	//TODO
	if(isRight){
		curTurn ++;
		curTurn %= 4;
	}
	return isRight;
}
