#include "DeckWaste.h"

DeckWaste::DeckWaste() {
	// TODO Auto-generated constructor stub

}

DeckWaste::~DeckWaste() {
	// TODO Auto-generated destructor stub
}

void DeckWaste::print() {
	IOInterface io;
	io.putConsole("-- Waste --");

	for (list<Card>::iterator listPosition = deck.begin(); listPosition != deck.end(); listPosition++ ){
		listPosition->printCard();
	}

}

bool DeckWaste::isAllowToMove(Card*) {
	return (false);
}
