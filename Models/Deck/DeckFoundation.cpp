#include "DeckFoundation.h"

DeckFoundation::DeckFoundation() {
	// TODO Auto-generated constructor stub
}

DeckFoundation::~DeckFoundation() {
	// TODO Auto-generated destructor stub
}

void DeckFoundation::setFoundation(int foundation) {
	foundationSuit=foundation;
}

int DeckFoundation::getFoundation(void) {
	return (foundationSuit);
}

void DeckFoundation::print() {
	IOInterface io;
	io.putConsole("-- Foundatation " + to_string(foundationSuit) + " --");

	for (list<Card>::iterator listPosition = deck.begin(); listPosition != deck.end(); listPosition++ ){
		listPosition->printCard();
	}
}

bool DeckFoundation::isAllowToMove(Card* cardToMove) {
	bool result = false;
	if (cardToMove->getSuit() == this->foundationSuit) {
		if (deck.empty()){
			if (cardToMove->compareNumberName("Ace") == 0) {
				result = true;
			}
		}
		else {
			if ( deck.back().compareNumberName(cardToMove->getNumberName()) < 0 ) {
				result = true;
			}
		}
	}
	return (result);
}
