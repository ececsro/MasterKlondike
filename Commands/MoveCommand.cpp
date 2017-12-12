#include "MoveCommand.h"

namespace command {

MoveCommand::MoveCommand() {
	Title = "(M)ove Card";
	ValidOptions.emplace("M");
	ValidOptions.emplace("m");
}

MoveCommand::~MoveCommand() {
	// TODO Auto-generated destructor stub
}

void MoveCommand::execute() {
}

} /* namespace command */
