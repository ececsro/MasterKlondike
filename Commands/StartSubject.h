#ifndef MASTERKLONDIKE_COMMANDS_STARTSUBJECT_H_
#define MASTERKLONDIKE_COMMANDS_STARTSUBJECT_H_

#include "StartObserver.h"
#include <list>

using namespace std;

namespace command {

class StartSubject {

	list<StartObserver*> startObservers;

public:
	StartSubject();
	virtual ~StartSubject();

	virtual void attach (StartObserver*);
	virtual void detach (StartObserver*);
	virtual void notify (void);
};

} /* namespace command */

#endif /* MASTERKLONDIKE_COMMANDS_STARTSUBJECT_H_ */
