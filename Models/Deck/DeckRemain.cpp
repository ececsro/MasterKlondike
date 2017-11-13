#include "DeckRemain.h"

DeckRemain::DeckRemain() {
	// TODO Auto-generated constructor stub

}

DeckRemain::~DeckRemain() {
	// TODO Auto-generated destructor stub
}

void DeckRemain::print() {
	IOInterface io;
	io.putConsole("-- Remain --");

	for (list<Card>::iterator listPosition = deck.begin(); listPosition != deck.end(); listPosition++ ){
		listPosition->printCard();
	}

}
