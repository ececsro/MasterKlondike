#include "Logic.h"

Logic::Logic() {
	// TODO Auto-generated constructor stub

}

Logic::~Logic() {
	// TODO Auto-generated destructor stub
}

Controller* Logic::getNextController() {
	return (&startController);
}
