#ifndef MASTERKLONDIKE_COMMANDS_TOUCHREMAINDECKCOMMAND_H_
#define MASTERKLONDIKE_COMMANDS_TOUCHREMAINDECKCOMMAND_H_

#include "Command.h"

namespace command {

class TouchRemainDeckCommand: public command::Command {
public:
	TouchRemainDeckCommand();
	virtual ~TouchRemainDeckCommand();
	void execute();
};

} /* namespace command */

#endif /* MASTERKLONDIKE_COMMANDS_TOUCHREMAINDECKCOMMAND_H_ */
