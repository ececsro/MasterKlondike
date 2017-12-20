#include "OldMoveController.h"

OldMoveController::OldMoveController(Game* gameParam, OldBoard* boardParam) : OldController (boardParam) {
	// TODO Auto-generated constructor stub

}

OldMoveController::~OldMoveController() {
	// TODO Auto-generated destructor stub
}

void OldMoveController::visit(ControllerVisitor* controllerVisitor) {
	controllerVisitor->accept(this);
}

bool OldMoveController::moveCard(string cardName, string placeToMove) {
	bool result=false;

	if (actualBoard->isCardEligible(cardName)) {
		if (actualBoard->checkToMove(cardName, placeToMove)) {
			//if the card can be moved, move it
				// if from Waste:  make sure is the last card in the list.
								// move to the last position in 'placeToMove'
								// make visible and or eligible the cards impacted
				// if from Foundation : similar to Waste
				// if from tableu:	can be any card in the list, no the last one
								//	'cut' and 'paste' the card and its 'tail of cards' to the new tableu
								// make visible and or eligible the cards impacted

			actualBoard->moveCards(cardName, placeToMove);
//			actualBoard->printBoard();
			result = true;
		}
	}
	//this->setGameStatus(GameStatus::IN_GAME);
	return (result);
}
