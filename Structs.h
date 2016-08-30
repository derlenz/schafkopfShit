#ifndef STRUCTS_H_
#define STRUCTS_H_

#include <vector>
#include <iostream>

using namespace std;

typedef int card,player;

enum IWould{
	nix, Sauspiel_anfrage, Solo , IWould_MAX
};
enum gameType{
	Sauspiel,Solo_Eichel, Solo_Gras, Solo_Herz, Solo_Schelln, Wenz, gameType_MAX
};

enum Phase{
	Handout, Asking, Play, End
};

struct turn{
	int player;
	vector<card> yourCards;
	vector<card> cardsPlayedCurTurn;
	Phase curPhase;
};

struct decision{
	player decider;
	card playedCard;
	IWould chosenType;
	gameType finalGameType;
	bool start;
};

#endif
