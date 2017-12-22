#include "Foundation.h"

Foundation::Foundation() {
	// TODO Auto-generated constructor stub
}

Foundation::~Foundation() {
	// TODO Auto-generated destructor stub
}

void Foundation::setFoundation(int foundation) {
	foundationSuit=foundation;
}

int Foundation::getFoundation(void) {
	return (foundationSuit);
}

void Foundation::setPosition(int foundation) {
	foundationSuit=foundation;
}

int Foundation::getPosition(void) {
	return (foundationSuit);
}

void Foundation::print() {
	string foundationSuitName;

	switch (foundationSuit) {
	case (int) FoundationType::DIAMONDS:
			foundationSuitName="Diamonds";
			break;
	case (int) FoundationType::CLUBS:
			foundationSuitName="Clubs";
			break;
	case (int) FoundationType::HEARTS:
			foundationSuitName="Hearts";
			break;
	case (int) FoundationType::SPADES:
			foundationSuitName="Spades";
			break;
	}

	IOInterface* io = IOInterface::getInstance();
	io->putConsole("-- Foundation " + foundationSuitName + " --");

	this->printDeck();
}

bool Foundation::isAllowToMove(Card* cardToMove) {
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
