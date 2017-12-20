#ifndef MASTERKLONDIKE_COMMANDS_STARTCOMMAND_H_
#define MASTERKLONDIKE_COMMANDS_STARTCOMMAND_H_

#include "Command.h"
#include "../Controllers/StartController.h"
#include "StartSubject.h"

namespace command {

class StartCommand: public command::Command, public command::StartSubject {

public:
	StartCommand();
	StartCommand(const StartCommand&);
	virtual ~StartCommand();
	void execute();
	StartCommand* clone(void) const;
	virtual void afterExecutionMenu(void);

};

} /* namespace command */

#endif /* MASTERKLONDIKE_COMMANDS_STARTCOMMAND_H_ */
