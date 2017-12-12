#ifndef MASTERKLONDIKE_COMMANDS_STARTCOMMAND_H_
#define MASTERKLONDIKE_COMMANDS_STARTCOMMAND_H_

#include "Command.h"

namespace command {

class StartCommand: public command::Command {
public:
	StartCommand();
	virtual ~StartCommand();
	void execute();
};

} /* namespace command */

#endif /* MASTERKLONDIKE_COMMANDS_STARTCOMMAND_H_ */
