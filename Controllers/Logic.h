#ifndef MASTERKLONDIKE_CONTROLLERS_LOGIC_H_
#define MASTERKLONDIKE_CONTROLLERS_LOGIC_H_

#include "Controller.h"
#include "StartController.h"
#include "InGameController.h"
#include "MoveController.h"

#include "../Models/Game.h"
#include "../Models/Board.h"

class Logic {
	StartController* startController;
	InGameController* inGameController;
	MoveController* moveController;
	Game* actualGame;
	Board* actualBoard;

public:
	Logic();
	virtual ~Logic();
	Controller* getNextController();
};

#endif /* MASTERKLONDIKE_CONTROLLERS_LOGIC_H_ */
