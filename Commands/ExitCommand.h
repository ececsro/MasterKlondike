#ifndef MASTERKLONDIKE_COMMANDS_EXITCOMMAND_H_
#define MASTERKLONDIKE_COMMANDS_EXITCOMMAND_H_

#include "Command.h"
namespace command {

class ExitCommand: public command::Command {
public:
	ExitCommand();
	virtual ~ExitCommand();
	void execute();
	bool isInGame(void);
};

} /* namespace command */

#endif /* MASTERKLONDIKE_COMMANDS_EXITCOMMAND_H_ */
