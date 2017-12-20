#ifndef MASTERKLONDIKE_CONTROLLERS_CONTROLLER_H_
#define MASTERKLONDIKE_CONTROLLERS_CONTROLLER_H_

#include "../Models/Board.h"

namespace controller {

class Controller {
public:
	Controller();
	virtual ~Controller();
	virtual void printBoard();

};

} /* namespace controller */

#endif /* MASTERKLONDIKE_CONTROLLERS_CONTROLLER_H_ */
