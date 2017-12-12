#include "StartCommand.h"

namespace command {

StartCommand::StartCommand() {
	Title = "(S)tart New Game";
	ValidOptions.emplace("S");
	ValidOptions.emplace("s");
}

StartCommand::~StartCommand() {
	// TODO Auto-generated destructor stub
}

void StartCommand::execute() {
}

} /* namespace command */
