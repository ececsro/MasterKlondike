#ifndef MASTERKLONDIKE_CONTROLLERS_OLDMOVECONTROLLER_H_
#define MASTERKLONDIKE_CONTROLLERS_OLDMOVECONTROLLER_H_

#include "ControllerVisitor.h"
#include "OldController.h"

class OldMoveController: public OldController {
public:
	OldMoveController(Game*,OldBoard*);
	virtual ~OldMoveController();
	void visit(ControllerVisitor*);
	bool moveCard(string, string);
};

#endif /* MASTERKLONDIKE_CONTROLLERS_OLDMOVECONTROLLER_H_ */
