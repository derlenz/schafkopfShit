#include "Session.h"

int main(int ac, char** av){
	Session* MySession = new Session();

	MySession->newGame();

	MySession->play();

}
