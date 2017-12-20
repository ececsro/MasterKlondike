#ifndef MASTERKLONDIKE_CONTROLLERS_OLDSTARTOLDCONTROLLER_H_
#define MASTERKLONDIKE_CONTROLLERS_OLDSTARTOLDCONTROLLER_H_

#include "../Models/DeckBuilder.h"
#include "ControllerVisitor.h"
#include "OldController.h"

class OldStartController: public OldController {


public:
	OldStartController(OldBoard*);
	virtual ~OldStartController();
	void visit(ControllerVisitor*);
	void createDeckRemain();
	void initialDeploy();
};

#endif /* MASTERKLONDIKE_CONTROLLERS_OLDSTARTOLDCONTROLLER_H_ */
