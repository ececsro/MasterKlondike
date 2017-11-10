#include "Logic.h"

Logic::Logic() {
	// TODO Auto-generated constructor stub
	actualGame = new (Game);

}

Logic::~Logic() {
	// TODO Auto-generated destructor stub
	delete (actualGame);
}

Controller* Logic::getNextController() {

	GameStatus gameStatus =  actualGame->getStatus();

	switch ( gameStatus ) {
	case GameStatus::START:
		startController=new StartController;
		return (startController());
		break;
	case GameStatus::IN_GAME:
		//TODO LOGIC GAMESTATUS IN_GAME
        break;
	case GameStatus::FINISH:
		//TODO LOGIC GAMESTATUS FINISH
        break;
	default:
		return (nullptr);
        break;
	}
}
