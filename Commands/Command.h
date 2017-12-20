#ifndef MASTERKLONDIKE_COMMANDS_COMMAND_H_
#define MASTERKLONDIKE_COMMANDS_COMMAND_H_

#include <unordered_set>
#include <string>
using namespace std;

#include "StartSubject.h"
#include "StartObserver.h"

namespace command {

//class StartSubject;
//class StartObserver;

class Command {

	Command* nextCommand;

protected:
	string Title;
	unordered_set<string> ValidOptions;
	bool commandActiveState;

public:
	Command();
	virtual ~Command();
	virtual void execute() = 0;
	virtual Command* getCommandByOption(string);
	virtual bool isInGame(void);
	string getTitle();
	void setNextCommand(Command*);
	virtual Command* clone(void) const = 0;
	virtual bool isCommandActive(void);

	virtual void attachTo(Command*);
	virtual void afterExecutionMenu(void) = 0;
};

} /* namespace command */

#endif /* MASTERKLONDIKE_COMMANDS_COMMAND_H_ */
