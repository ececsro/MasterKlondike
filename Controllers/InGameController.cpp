#include "InGameOldController.h"

InGameController::InGameController(Game* gameParam, OldBoard* boardParam) : OldController (boardParam) {
	// TODO Auto-generated constructor stub

}

InGameController::~InGameController() {
	// TODO Auto-generated destructor stub
}

void InGameController::visit(ControllerVisitor* controllerVisitor) {
	controllerVisitor->accept(this);
}

void InGameController::finishGame() {
	actualGame->setStatus(GameStatus::FINISH);

}

void InGameController::showCardFromRemain() {
	Card* cardToMove;

	//Check if empty
	if (actualBoard->deckRemain->isEmpty()){
		// if empty redo Remain with Waste
		while (!actualBoard->deckWaste->isEmpty()){
			cardToMove=actualBoard->deckWaste->backCard();
			actualBoard->deckRemain->pushBackCard(cardToMove);
			actualBoard->deckWaste->popCard();
			actualBoard->deckRemain->backCard()->setCardVisible(false);
			actualBoard->deckRemain->backCard()->setCardEligible(false);
		}
	}

	// Move last card from remain to waste (or 3 last cards based on options)


	for (int i=0; (i < NUM_OF_CARDS_TO_SHOW_FROM_REMAIN) && (!actualBoard->deckRemain->isEmpty()); i++){
		cardToMove=actualBoard->deckRemain->backCard();
		if (!actualBoard->deckWaste->isEmpty()) {
			actualBoard->deckWaste->backCard()->setCardEligible(false);
		}
		actualBoard->deckWaste->pushBackCard(cardToMove);
		actualBoard->deckRemain->popCard();
		actualBoard->deckWaste->backCard()->setCardVisible(true);
	}
	actualBoard->deckWaste->backCard()->setCardEligible(true);
	// Make the moved cards VISIBLE
	// Make the last card ELIGIBLE
}
