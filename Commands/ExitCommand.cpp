#include "ExitCommand.h"

namespace command {

ExitCommand::ExitCommand() {
	Title = "(E)xit";
	ValidOptions.emplace("E");
	ValidOptions.emplace("e");
}

ExitCommand::~ExitCommand() {
	// TODO Auto-generated destructor stub
}

void ExitCommand::execute() {

}

bool ExitCommand::isInGame(void) {
	return false;
}

} /* namespace command */
