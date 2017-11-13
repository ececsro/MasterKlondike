#include "Game.h"

Game::Game() {
	status = GameStatus::START;
}

Game::~Game() {
	// TODO Auto-generated destructor stub
}

GameStatus Game::getStatus() {
	return (status);
}

void Game::setStatus(GameStatus newGameStatus) {
    status = newGameStatus;
}
