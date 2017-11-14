#ifndef MASTERKLONDIKE_CONTROLLERS_INGAMECONTROLLER_H_
#define MASTERKLONDIKE_CONTROLLERS_INGAMECONTROLLER_H_

#include "ControllerVisitor.h"
#include "Controller.h"

class InGameController: public Controller {
public:
	InGameController(Game*);
	virtual ~InGameController();
	void visit(ControllerVisitor*);
	void finishGame();

};

#endif /* MASTERKLONDIKE_CONTROLLERS_INGAMECONTROLLER_H_ */
