#include "DeckTableu.h"

DeckTableu::DeckTableu() {
	// TODO Auto-generated constructor stub
}

DeckTableu::~DeckTableu() {
	// TODO Auto-generated destructor stub
}

void DeckTableu::setPosition(int position) {
	tableuPosition=position;
}

int DeckTableu::getPosition(void) {
	return (tableuPosition);
}

void DeckTableu::print() {
	IOInterface* io = IOInterface::getInstance();
	io->putConsole("-- Tableu " + to_string(tableuPosition + 1) + " --");

	this->printDeck();

}

bool DeckTableu::isAllowToMove(Card* cardToMove) {
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
