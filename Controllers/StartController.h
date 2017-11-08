#ifndef MASTERKLONDIKE_CONTROLLERS_STARTCONTROLLER_H_
#define MASTERKLONDIKE_CONTROLLERS_STARTCONTROLLER_H_

#include "ControllerVisitor.h"
#include "Controller.h"

class StartController: public Controller {

public:
	StartController();
	virtual ~StartController();
	void visit(ControllerVisitor*);
};

#endif /* MASTERKLONDIKE_CONTROLLERS_STARTCONTROLLER_H_ */
