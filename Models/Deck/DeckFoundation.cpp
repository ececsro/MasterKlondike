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
	IOInterface* io = IOInterface::getInstance();
	io->putConsole("-- Foundatation " + to_string(foundationSuit) + " --");

	this->printDeck();
}

bool DeckFoundation::isAllowToMove(Card* cardToMove) {
	bool result = false;
	if (cardToMove->getSuit() == this->foundationSuit) {
		if (deck.empty()){
			if (cardToMove->compareNumberCard(0) == 0) {
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
