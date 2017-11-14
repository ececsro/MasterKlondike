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
	ioConsole.putConsole("Allowed Orders:");
	ioConsole.putConsole(" 1 - END");
	ioConsole.putConsole(" 2 - Get Card from Remain Deck");
	ioConsole.putConsole(" 3 - Move Card");
	AllowedDialog dialog;
	nextMove=dialog.getOrderInGame(&ioConsole);

    int numNextMove = std::stoi(nextMove);
	switch (numNextMove) {
	case 1:
		ioConsole.putConsole("The game will be finished");
		controllerFromView->finishGame();
		break;
	case 2:

		break;
	case 3:
		break;
	default:
		;
    }
}
