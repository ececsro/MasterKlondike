#include "InGameView.h"

InGameView::InGameView() {
	// TODO Auto-generated constructor stub

}

InGameView::~InGameView() {
	// TODO Auto-generated destructor stub
}

InGameView::InGameView(InGameController* controllerFromView) {
	assert (controllerFromView!=nullptr);
	string nextMove;
	ioConsole->putConsole("Allowed Orders:");
	ioConsole->putConsole(" 4 - END");
	ioConsole->putConsole(" 2 - Get Card from Remain to Waste Deck");
	ioConsole->putConsole("     ( Refill Remain deck if empty )");
	ioConsole->putConsole(" 3 - Move Card");
	AllowedDialog dialog;
	nextMove=dialog.getOrderInGame(ioConsole);

    int numNextMove = std::stoi(nextMove);
	switch (numNextMove) {
	case 4:
		ioConsole->putConsole("The game will be finished");
		controllerFromView->finishGame();
		break;
	case 2:
		controllerFromView->showCardFromRemain();

		controllerFromView->getBoard()->printBoard();
		break;
	case 3:
		// start MoveView
		//controllerFromView->setGameStatus(GameStatus::MOVE);
		break;
	default:
		;
    }
}
