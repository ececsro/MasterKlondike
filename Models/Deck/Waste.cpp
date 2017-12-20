#include "Waste.h"

Waste::Waste() {
	// TODO Auto-generated constructor stub

}

Waste::~Waste() {
	// TODO Auto-generated destructor stub
}

void Waste::print() {
	IOInterface* io = IOInterface::getInstance();
	io->putConsole("-- Waste --");

	this->printDeck();

}

bool Waste::isAllowToMove(Card*) {
	return (false);
}
