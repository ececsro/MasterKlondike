#ifndef MASTERKLONDIKE_COMMANDS_MOVECOMMAND_H_
#define MASTERKLONDIKE_COMMANDS_MOVECOMMAND_H_

#include "Command.h"
#include "../Utils/AllowedDialog.h"
#include "../Controllers/MoveController.h"
#include "StartObserver.h"
#include "StartSubject.h"

namespace command {

class MoveCommand: public command::Command, public command::StartObserver {

	string cardName;
	string destinationPlace;
	string originalPlace;

public:
	MoveCommand();
	MoveCommand(const MoveCommand&);
	virtual ~MoveCommand();
	void execute();
	MoveCommand* clone(void) const;

	virtual void update(StartSubject*);
	virtual void attachTo(Command*);

	virtual void afterExecutionMenu(void);

};

} /* namespace command */

#endif /* MASTERKLONDIKE_COMMANDS_MOVECOMMAND_H_ */
