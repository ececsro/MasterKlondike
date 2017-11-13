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
