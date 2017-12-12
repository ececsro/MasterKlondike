#include "DeckRemain.h"

DeckRemain::DeckRemain() {
	// TODO Auto-generated constructor stub

}

DeckRemain::~DeckRemain() {
	// TODO Auto-generated destructor stub
}

void DeckRemain::print() {
	IOInterface* io = IOInterface::getInstance();
	io->putConsole("-- Remain --");

	this->printDeck();

}

bool DeckRemain::isAllowToMove(Card*) {
	return (false);
}
