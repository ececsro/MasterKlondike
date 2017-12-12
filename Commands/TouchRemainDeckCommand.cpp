#include "TouchRemainDeckCommand.h"

namespace command {

TouchRemainDeckCommand::TouchRemainDeckCommand() {
	Title = "(G)et New Card from Remain Deck";
	ValidOptions.emplace("G");
	ValidOptions.emplace("g");
}

TouchRemainDeckCommand::~TouchRemainDeckCommand() {
	// TODO Auto-generated destructor stub
}

void TouchRemainDeckCommand::execute() {
}

} /* namespace command */
