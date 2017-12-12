#include "DeckWaste.h"

DeckWaste::DeckWaste() {
	// TODO Auto-generated constructor stub

}

DeckWaste::~DeckWaste() {
	// TODO Auto-generated destructor stub
}

void DeckWaste::print() {
	IOInterface* io = IOInterface::getInstance();
	io->putConsole("-- Waste --");

	this->printDeck();

}

bool DeckWaste::isAllowToMove(Card*) {
	return (false);
}
