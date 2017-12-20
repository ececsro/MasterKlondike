#ifndef MASTERKLONDIKE_CONTROLLERS_TOUCHREMAINDECKCONTROLLER_H_
#define MASTERKLONDIKE_CONTROLLERS_TOUCHREMAINDECKCONTROLLER_H_

#define NUM_OF_CARDS_TO_SHOW_FROM_REMAIN 1

#include "Controller.h"
#include "../Models/Board.h"

namespace controller {

class TouchRemainDeckController: public Controller {
public:
	TouchRemainDeckController();
	virtual ~TouchRemainDeckController();
	void touchRemainDeck(void);
};

} /* namespace controller */

#endif /* MASTERKLONDIKE_CONTROLLERS_TOUCHREMAINDECKCONTROLLER_H_ */
