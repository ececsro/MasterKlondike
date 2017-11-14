#include "Logic.h"

Logic::Logic() {
	// TODO Auto-generated constructor stub
	actualGame = new (Game);
	startController=new StartController(actualGame);
	inGameController=new InGameController(actualGame);

}

Logic::~Logic() {
	// TODO Auto-generated destructor stub
}

Controller* Logic::getNextController() {

	GameStatus gameStatus =  actualGame->getStatus();

	switch ( gameStatus ) {
	case GameStatus::START:
		return (startController);
		break;
	case GameStatus::IN_GAME:
		//TODO LOGIC GAMESTATUS IN_GAME
		return (inGameController);
        break;
	case GameStatus::FINISH:
		//TODO LOGIC GAMESTATUS FINISH
		return (nullptr);
		break;
	default:
		return (nullptr);
        break;
	}
}

