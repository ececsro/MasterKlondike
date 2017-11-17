#ifndef MASTERKLONDIKE_CONTROLLERS_INGAMECONTROLLER_H_
#define MASTERKLONDIKE_CONTROLLERS_INGAMECONTROLLER_H_

#define NUM_OF_CARDS_TO_SHOW_FROM_REMAIN 1

#include "ControllerVisitor.h"
#include "Controller.h"

class InGameController: public Controller {
public:
	InGameController(Game*, Board*);
	virtual ~InGameController();
	void visit(ControllerVisitor*);
	void finishGame();
	void showCardFromRemain();
	bool isDeckEmpty(Deck*);


};

#endif /* MASTERKLONDIKE_CONTROLLERS_INGAMECONTROLLER_H_ */
