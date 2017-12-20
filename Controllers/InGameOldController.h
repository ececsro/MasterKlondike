#ifndef MASTERKLONDIKE_CONTROLLERS_INGAMEOLDCONTROLLER_H_
#define MASTERKLONDIKE_CONTROLLERS_INGAMEOLDCONTROLLER_H_

#define NUM_OF_CARDS_TO_SHOW_FROM_REMAIN 1

#include "ControllerVisitor.h"
#include "OldController.h"

class InGameController: public OldController {
public:
	InGameController(Game*, OldBoard*);
	virtual ~InGameController();
	void visit(ControllerVisitor*);
	void finishGame();
	void showCardFromRemain();
	bool isDeckEmpty(Deck*);


};

#endif /* MASTERKLONDIKE_CONTROLLERS_INGAMEOLDCONTROLLER_H_ */
