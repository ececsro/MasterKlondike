#include "OldController.h"

OldController::OldController(OldBoard* boardParam) {
	gameOptions = GameOptions::getInstance();
	actualBoard = boardParam;
}

OldController::~OldController() {
}

OldBoard* OldController::getBoard() {
	return (actualBoard);
}
