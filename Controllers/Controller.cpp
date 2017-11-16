#include "Controller.h"

Controller::~Controller() {
	// TODO Auto-generated destructor stub

}

Controller::Controller(Game* gameParam, Board* boardParam) {
	gameOptions = GameOptions::getInstance();

	actualGame = gameParam;
	actualBoard = boardParam;

/*
	deckRemain = new DeckRemain();
	deckWaste = new DeckWaste();

	DeckTableu* deckTableuAux;
	tableu.reserve(NUM_OF_COLUMNS);
	for (int i=0 ; i < NUM_OF_COLUMNS ; i++) {
		deckTableuAux = new DeckTableu;
		tableu.push_back(deckTableuAux);
		tableu.at(i)->setPosition(i);
	}
*/
}

void Controller::setGameStatus(GameStatus newGameStatus) {
	actualGame->setStatus(newGameStatus);
}

Board* Controller::getBoard() {
	return (actualBoard);
}
