#include "TouchRemainDeckController.h"

namespace controller {

TouchRemainDeckController::TouchRemainDeckController() {
	// TODO Auto-generated constructor stub

}

TouchRemainDeckController::~TouchRemainDeckController() {
	// TODO Auto-generated destructor stub
}

void TouchRemainDeckController::touchRemainDeck(void) {
	Board* board = Board::getInstance();
	Card* cardToMove;

	//Check if empty
	if (board->getDeck(DeckType::REMAIN)->isEmpty()){
		// if empty redo Remain with Waste
		while (!board->getDeck(DeckType::WASTE)->isEmpty()){
			cardToMove=board->getDeck(DeckType::WASTE)->backCard();
			board->getDeck(DeckType::REMAIN)->pushBackCard(cardToMove);
			board->getDeck(DeckType::WASTE)->popCard();
			board->getDeck(DeckType::REMAIN)->backCard()->setCardVisible(false);
			board->getDeck(DeckType::REMAIN)->backCard()->setCardEligible(false);
		}
	}

	// Move last card from remain to waste (or 3 last cards based on options)

	for (int i=0; (i < NUM_OF_CARDS_TO_SHOW_FROM_REMAIN) && (!board->getDeck(DeckType::REMAIN)->isEmpty()); i++){
		cardToMove=board->getDeck(DeckType::REMAIN)->backCard();
		if (!board->getDeck(DeckType::WASTE)->isEmpty()) {
			board->getDeck(DeckType::WASTE)->backCard()->setCardEligible(false);
		}
		board->getDeck(DeckType::WASTE)->pushBackCard(cardToMove);
		board->getDeck(DeckType::REMAIN)->popCard();
		board->getDeck(DeckType::WASTE)->backCard()->setCardVisible(true);
	}
	board->getDeck(DeckType::WASTE)->backCard()->setCardEligible(true);
}

} /* namespace controller */
