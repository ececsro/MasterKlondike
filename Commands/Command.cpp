#include "Command.h"

namespace command {

Command::Command() {
	nextCommand = nullptr;
}

Command::~Command() {
	// TODO Auto-generated destructor stub
}

Command* Command::getCommandByOption(string Option) {

	if (this->ValidOptions.count(Option) != 0 && this->commandActiveState==true){
		return this;
	}
	else if (nextCommand == nullptr) {
		return (nullptr);
	}
	else {
		return nextCommand->getCommandByOption(Option);
	}
}

bool Command::isInGame(void) {
	return true;
}

string command::Command::getTitle() {
	return (this->Title);
}

void Command::setNextCommand(Command* newNextCommand) {
	nextCommand = newNextCommand;
}

void Command::attachTo(Command* startCommand) {
}

bool Command::isCommandActive(void) {
	return this->commandActiveState;
}

} /* namespace command */

