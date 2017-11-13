#include "StartController.h"

StartController::StartController(Game* gameParam) : Controller (gameParam) {
	// TODO Auto-generated constructor stub
}

StartController::~StartController() {
	// TODO Auto-generated destructor stub
}

void StartController::visit(ControllerVisitor* controllerVisitor) {
	controllerVisitor->accept(this);
}

void StartController::createDeckRemain() {
	DeckConstructor(this->gameOptions, this->deckRemain);
}

void StartController::initialDeploy() {
	unsigned int j;
	for (unsigned i=0; i < tableu.size(); i++){
		for (j=i; j < tableu.size(); j++){
			tableu[j]->emplaceBackDeck(*(deckRemain->backCard()));
			deckRemain->popCard();
			if (j == i){
				tableu[j]->backCard()->setCardVisible(true);
				tableu[j]->backCard()->setCardEligible(true);
			}
		}
	}

	actualGame->setStatus(GameStatus::IN_GAME);

	// SHOW THE BOARD ???????

	this->deckRemain->print();
	for (unsigned i=0; i < tableu.size(); i++){
		tableu[i]->print();
    }
}
