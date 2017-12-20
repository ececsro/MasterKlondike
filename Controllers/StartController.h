#ifndef MASTERKLONDIKE_CONTROLLERS_STARTCONTROLLER_H_
#define MASTERKLONDIKE_CONTROLLERS_STARTCONTROLLER_H_

#include "Controller.h"
#include "../Models/BoardBuilder.h"
#include "../Models/DeckBuilder.h"

namespace controller {

class StartController: public Controller {
public:
	StartController();
	virtual ~StartController();
	void createBoard(void);
	void initialDeploy(void);
};

} /* namespace controller */

#endif /* MASTERKLONDIKE_CONTROLLERS_STARTCONTROLLER_H_ */
