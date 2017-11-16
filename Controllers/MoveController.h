#ifndef MASTERKLONDIKE_CONTROLLERS_MOVECONTROLLER_H_
#define MASTERKLONDIKE_CONTROLLERS_MOVECONTROLLER_H_

#include "ControllerVisitor.h"
#include "Controller.h"

class MoveController: public Controller {
public:
	MoveController(Game*,Board*);
	virtual ~MoveController();
	void visit(ControllerVisitor*);
	bool moveCard(string, string);
};

#endif /* MASTERKLONDIKE_CONTROLLERS_MOVECONTROLLER_H_ */
