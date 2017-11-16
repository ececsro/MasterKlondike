#include "StartController.h"

StartController::StartController(Game* gameParam, Board* boardParam) : Controller (gameParam, boardParam) {
	// TODO Auto-generated constructor stub
}

StartController::~StartController() {
	// TODO Auto-generated destructor stub
}

void StartController::visit(ControllerVisitor* controllerVisitor) {
	controllerVisitor->accept(this);
}

void StartController::createDeckRemain() {
	DeckConstructor(this->gameOptions, this->actualBoard->deckRemain);
}

void StartController::initialDeploy() {
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

	this->setGameStatus(GameStatus::IN_GAME);

	actualBoard->printBoard();
}
