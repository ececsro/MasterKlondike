#ifndef MASTERKLONDIKE_COMMANDS_TOUCHREMAINDECKCOMMAND_H_
#define MASTERKLONDIKE_COMMANDS_TOUCHREMAINDECKCOMMAND_H_

#include "Command.h"
#include "StartObserver.h"
#include "../Controllers/TouchRemainDeckController.h"

namespace command {

class TouchRemainDeckCommand: public command::Command, public command::StartObserver {
public:
	TouchRemainDeckCommand();
	TouchRemainDeckCommand(const TouchRemainDeckCommand&);
	virtual ~TouchRemainDeckCommand();
	void execute();
	TouchRemainDeckCommand* clone(void) const;

	virtual void update(StartSubject*);
	virtual void attachTo(Command*);
	virtual void afterExecutionMenu(void);
};

} /* namespace command */

#endif /* MASTERKLONDIKE_COMMANDS_TOUCHREMAINDECKCOMMAND_H_ */
