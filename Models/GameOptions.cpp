#include "GameOptions.h"

GameOptions* GameOptions::_instance = nullptr;

GameOptions::GameOptions() {
	// TODO Auto-generated constructor stub
	numOfCards=52;
}

GameOptions::~GameOptions() {
	// TODO Auto-generated destructor stub
}

int GameOptions::getNumOfCards() {
	return (numOfCards);
}

GameOptions* GameOptions::getInstance() {
	if ( _instance == nullptr ) {
		_instance = new GameOptions();
	}
	return _instance;
}
