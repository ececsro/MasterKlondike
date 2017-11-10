#include "Controller.h"

Controller::~Controller() {
	// TODO Auto-generated destructor stub
	gameOptions = GameOptions::getInstance();
	deckRemain = new DeckRemain();
}

Controller::Controller() {
	// TODO Auto-generated constructor stub

}

