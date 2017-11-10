#ifndef MASTERKLONDIKE_CONTROLLERS_LOGIC_H_
#define MASTERKLONDIKE_CONTROLLERS_LOGIC_H_

#include "Controller.h"
#include "StartController.h"
#include "..\Models\Game.h"

class Logic {
	StartController* startController;
	Game* actualGame;

public:
	Logic();
	virtual ~Logic();
	Controller* getNextController();
};

#endif /* MASTERKLONDIKE_CONTROLLERS_LOGIC_H_ */
