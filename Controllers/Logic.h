#ifndef MASTERKLONDIKE_CONTROLLERS_LOGIC_H_
#define MASTERKLONDIKE_CONTROLLERS_LOGIC_H_

#include "../Models/Game.h"
#include "../Models/Old_OldBoard.h"
#include "InGameOldController.h"
#include "OldController.h"
#include "OldMoveController.h"
#include "OldStartOldController.h"

class Logic {
	OldStartController* startController;
	InGameController* inGameController;
	OldMoveController* moveController;
	Game* actualGame;
	OldBoard* actualBoard;

public:
	Logic();
	virtual ~Logic();
	OldController* getNextController();
};

#endif /* MASTERKLONDIKE_CONTROLLERS_LOGIC_H_ */
