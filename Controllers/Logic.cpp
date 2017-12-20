#include "Logic.h"

Logic::Logic() {
	actualGame = new (Game);
	actualBoard = new (OldBoard);
//	startController=new OldStartController(actualGame, actualBoard);
	inGameController=new InGameController(actualGame, actualBoard);
	moveController=new OldMoveController(actualGame, actualBoard);

	startController=new OldStartController(actualBoard);
//	inGameController=new InGameController(actualBoard);
//	moveController=new MoveController(actualBoard);

}

Logic::~Logic() {
	// TODO Auto-generated destructor stub
}

OldController* Logic::getNextController() {

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

