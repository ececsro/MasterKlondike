#ifndef MASTERKLONDIKE_COMMANDS_MOVECOMMAND_H_
#define MASTERKLONDIKE_COMMANDS_MOVECOMMAND_H_

#include "Command.h"

namespace command {

class MoveCommand: public command::Command {
public:
	MoveCommand();
	virtual ~MoveCommand();
	void execute();
};

} /* namespace command */

#endif /* MASTERKLONDIKE_COMMANDS_MOVECOMMAND_H_ */
