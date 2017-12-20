#include "Controller.h"

namespace controller {

Controller::Controller() {
	// TODO Auto-generated constructor stub

}

Controller::~Controller() {
	// TODO Auto-generated destructor stub
}

void Controller::printBoard() {
	Board* board = Board::getInstance();
	board->printBoard();
}

} /* namespace controller */
