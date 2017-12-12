#ifndef MASTERKLONDIKE_COMMANDS_COMMAND_H_
#define MASTERKLONDIKE_COMMANDS_COMMAND_H_

#include <unordered_set>
#include <string>
using namespace std;

namespace command {

class Command {

	Command* nextCommand;

protected:
	string Title;
	unordered_set<string> ValidOptions;

public:
	Command();
	virtual ~Command();
	virtual void execute() = 0;
	virtual bool isValidOption(string);
	virtual Command* getCommandByOption(string);
	virtual bool isInGame(void);
	string getTitle();
	void setNextCommand(Command*);
};

} /* namespace command */

#endif /* MASTERKLONDIKE_COMMANDS_COMMAND_H_ */
