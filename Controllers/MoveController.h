#ifndef MASTERKLONDIKE_CONTROLLERS_MOVECONTROLLER_H_
#define MASTERKLONDIKE_CONTROLLERS_MOVECONTROLLER_H_

#include "Controller.h"
#include <string>

using namespace std;

namespace controller {

class MoveController: public Controller {

public:
	MoveController();
	virtual ~MoveController();
	bool moveCard(string, string);
};

} /* namespace controller */

#endif /* MASTERKLONDIKE_CONTROLLERS_MOVECONTROLLER_H_ */
