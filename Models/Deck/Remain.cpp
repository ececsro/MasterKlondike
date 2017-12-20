#include "Remain.h"

Remain::Remain() {
	// TODO Auto-generated constructor stub

}

Remain::~Remain() {
	// TODO Auto-generated destructor stub
}

void Remain::print(void) {
	IOInterface* io = IOInterface::getInstance();
	io->putConsole("-- Remain --");

	this->printDeck();

}

bool Remain::isAllowToMove(Card*) {
	return (false);
}
