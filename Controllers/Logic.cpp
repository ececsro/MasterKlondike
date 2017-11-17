#include "Logic.h"

Logic::Logic() {
	actualGame = new (Game);
	actualBoard = new (Board);
	startController=new StartController(actualGame, actualBoard);
	inGameController=new InGameController(actualGame, actualBoard);
	moveController=new MoveController(actualGame, actualBoard);

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
		return (inGameController);
        break;
	case GameStatus::MOVE:
		//TODO LOGIC GAMESTATUS IN_GAME
		return (moveController);
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

