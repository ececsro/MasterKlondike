#include "MoveController.h"

MoveController::MoveController(Game* gameParam, Board* boardParam) : Controller (gameParam, boardParam) {
	// TODO Auto-generated constructor stub

}

MoveController::~MoveController() {
	// TODO Auto-generated destructor stub
}

void MoveController::visit(ControllerVisitor* controllerVisitor) {
	controllerVisitor->accept(this);
}

bool MoveController::moveCard(string cardName, string placeToMove) {
	bool result=false;

	//Look for the card in all the decks. Use board. Get the deck if exists

	if (actualBoard->isCardEligible(cardName)) {
		//Check if the card is eligible. If yes go on, else - result false

		result = actualBoard->checkToMove(cardName, placeToMove);
		result = true;




	//Check if the card can fit in placeToMove
		// get last card of 'placeToMove'
		// compare both cards to decide if they can be joined
			// if foundation: same suit --> new card = old card + 1
			// if tableu: different color --> new card = old card -1

		//if the card can be moved, move it
			// if from Waste:  make sure is the last card in the list.
							// move to the last position in 'placeToMove'
							// make visible and or eligible the cards impacted
			// if from Foundation : similar to Waste
			// if from tableu:	can be any card in the list, no the last one
							//	'cut' and 'paste' the card and its 'tail of cards' to the new tableu
							// make visible and or eligible the cards impacted

	}

	return (result);
}
