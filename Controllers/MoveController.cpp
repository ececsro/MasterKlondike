#include "MoveController.h"

namespace controller {

MoveController::MoveController() {
	// TODO Auto-generated constructor stub

}

MoveController::~MoveController() {
	// TODO Auto-generated destructor stub
}

bool MoveController::moveCard(string cardToMove, string destinationPlace) {
	bool result=false;
	Board* board = Board::getInstance();

	if (board->isCardEligible(cardToMove)) {
		if (board->checkToMove(cardToMove, destinationPlace)) {
			//if the card can be moved, move it
				// if from Waste:  make sure is the last card in the list.
								// move to the last position in 'placeToMove'
								// make visible and or eligible the cards impacted
				// if from Foundation : similar to Waste
				// if from tableu:	can be any card in the list, no the last one
								//	'cut' and 'paste' the card and its 'tail of cards' to the new tableu
								// make visible and or eligible the cards impacted

//			board->moveCards(cardToMove, destinationPlace);
			result = true;
		}
	}
	return (result);
}

} /* namespace controller */
