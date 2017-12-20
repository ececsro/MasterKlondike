#include "OldStartOldController.h"

OldStartController::OldStartController(OldBoard* boardParam) : OldController (boardParam) {
	// TODO Auto-generated constructor stub
}

OldStartController::~OldStartController() {
	// TODO Auto-generated destructor stub
}

void OldStartController::visit(ControllerVisitor* controllerVisitor) {
	controllerVisitor->accept(this);
}

void OldStartController::createDeckRemain() {
	DeckBuilder(this->actualBoard->deckRemain);
}

void OldStartController::initialDeploy() {
	unsigned int j;
	for (unsigned i=0; i < actualBoard->tableu.size(); i++){
		for (j=i; j < actualBoard->tableu.size(); j++){
			actualBoard->tableu[j]->emplaceBackDeck(actualBoard->deckRemain->backCard());
			actualBoard->deckRemain->popCard();
			if (j == i){
				actualBoard->tableu[j]->backCard()->setCardVisible(true);
				actualBoard->tableu[j]->backCard()->setCardEligible(true);
			}
		}
	}

	actualBoard->printBoard();
}
