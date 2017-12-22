#include "Tableu.h"

Tableu::Tableu() {
	// TODO Auto-generated constructor stub
}

Tableu::~Tableu() {
	// TODO Auto-generated destructor stub
}

void Tableu::setPosition(int position) {
	tableuPosition=position;
}

int Tableu::getPosition(void) {
	return (tableuPosition);
}

void Tableu::print() {
	IOInterface* io = IOInterface::getInstance();
	io->putConsole("-- Tableu " + to_string(tableuPosition + 1) + " --");

	this->printDeck();
}

bool Tableu::isAllowToMove(Card* cardToMove) {
	bool result = false;
	if (deck.empty()){
		if (cardToMove->compareNumberCard(12) == 0) {
			result = true;
		}
	}
	else {
		if ( deck.back().compareColor(cardToMove) != 0 ) {
			if ( deck.back().compareNumberName(cardToMove->getNumberName()) > 0 ) {
				result = true;
			}
		}
	}
	return (result);
}

void Tableu::moveCards(Card* cardToMove) {
	cardToMove->getDeck();
}
