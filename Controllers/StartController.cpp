#include "StartController.h"

namespace controller {

StartController::StartController() {
}

StartController::~StartController() {
}

void StartController::createBoard(void) {
	BoardBuilder BoardBuilder;
	BoardBuilder.construct();
}

void StartController::initialDeploy(void) {
	Board* Board = Board::getInstance();
	DeckBuilder DeckConstructor;
	DeckConstructor.construct(Board->getDeck(DeckType::REMAIN));

	unsigned int j;
	for (unsigned i=0; i < (int) TableuType::COUNT ;i++){
		for (j=i; j < (int) TableuType::COUNT; j++){
			Board->getDeck(DeckType::TABLEU)->getDeck(j)->emplaceBackDeck(Board->getDeck(DeckType::REMAIN)->backCard());
			Board->getDeck(DeckType::REMAIN)->popCard();
			if (j == i){
				Board->getDeck(DeckType::TABLEU)->getDeck(j)->backCard()->setCardVisible(true);
				Board->getDeck(DeckType::TABLEU)->getDeck(j)->backCard()->setCardEligible(true);
			}
		}
	}
}

} /* namespace controller */
