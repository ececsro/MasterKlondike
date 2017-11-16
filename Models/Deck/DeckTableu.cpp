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
	IOInterface io;
	io.putConsole("-- Tableu " + to_string(tableuPosition + 1) + " --");

	for (list<Card>::iterator listPosition = deck.begin(); listPosition != deck.end(); listPosition++ ){
		listPosition->printCard();
	}

}

bool DeckTableu::isAllowToMove(Card* cardToMove) {
	bool result = false;
	if (deck.empty()){
		if (cardToMove->compareNumberName("King") == 0) {
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
