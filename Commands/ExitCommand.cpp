#include "ExitCommand.h"

namespace command {

ExitCommand::ExitCommand() {
	Title = "(E)xit";
	ValidOptions.emplace("E");
	ValidOptions.emplace("e");

	commandActiveState=true;
}

ExitCommand::ExitCommand(const ExitCommand& OriginalCommand) {
	this->Title = OriginalCommand.Title;
}

ExitCommand::~ExitCommand() {
	// TODO Auto-generated destructor stub
}

void ExitCommand::execute() {

}

bool ExitCommand::isInGame(void) {
	return false;
}


ExitCommand* ExitCommand::clone(void) const {
	return new ExitCommand(*this);
}

void ExitCommand::afterExecutionMenu(void) {
}

} /* namespace command */
