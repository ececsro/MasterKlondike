#include "TouchRemainDeckCommand.h"

namespace command {

TouchRemainDeckCommand::TouchRemainDeckCommand() {
	Title = "(G)et New Card from Remain Deck";
	ValidOptions.emplace("G");
	ValidOptions.emplace("g");

	commandActiveState = false;
}

TouchRemainDeckCommand::~TouchRemainDeckCommand() {
	// TODO Auto-generated destructor stub
}

TouchRemainDeckCommand::TouchRemainDeckCommand(const TouchRemainDeckCommand& OriginalCommand) {
	this->Title = OriginalCommand.Title;
}

void TouchRemainDeckCommand::execute() {
	controller::TouchRemainDeckController remainController;
	remainController.touchRemainDeck();
	remainController.printBoard();

}

TouchRemainDeckCommand* TouchRemainDeckCommand::clone(void) const {
	return new TouchRemainDeckCommand(*this);
}

void TouchRemainDeckCommand::update(StartSubject* startCommand) {
	this->commandActiveState = true;
}

void TouchRemainDeckCommand::attachTo(Command* startCommand) {
	dynamic_cast<StartSubject*>(startCommand)->attach(this);
}

void TouchRemainDeckCommand::afterExecutionMenu(void) {
}

} /* namespace command */
