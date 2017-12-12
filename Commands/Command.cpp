#include "Command.h"

namespace command {

Command::Command() {
	nextCommand = nullptr;
}

Command::~Command() {
	// TODO Auto-generated destructor stub
}

Command* Command::getCommandByOption(string Option) {

	if (this->isValidOption(Option)){
		return this;
	}
	else if (nextCommand == nullptr) {
		return (nullptr);
	}
	else {
		return nextCommand->getCommandByOption(Option);
	}
}

bool Command::isValidOption(string Option) {
	return (ValidOptions.count(Option));
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

} /* namespace command */
