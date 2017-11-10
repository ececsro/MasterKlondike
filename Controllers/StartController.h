#ifndef MASTERKLONDIKE_CONTROLLERS_STARTCONTROLLER_H_
#define MASTERKLONDIKE_CONTROLLERS_STARTCONTROLLER_H_

#include "ControllerVisitor.h"
#include "Controller.h"
#include "../Models/DeckConstructor.h"

class StartController: public Controller {


public:
	StartController();
	virtual ~StartController();
	void visit(ControllerVisitor*);
	void createDeckRemain();
};

#endif /* MASTERKLONDIKE_CONTROLLERS_STARTCONTROLLER_H_ */
