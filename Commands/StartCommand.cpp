#include "StartCommand.h"

namespace command {

StartCommand::StartCommand() {
	Title = "(S)tart New Game";
	ValidOptions.emplace("S");
	ValidOptions.emplace("s");

	commandActiveState=true;
}

StartCommand::~StartCommand() {
}

StartCommand::StartCommand(const StartCommand& OriginalCommand) {
	this->Title = OriginalCommand.Title;
}

void StartCommand::execute() {
	controller::StartController StartGame;
	StartGame.createBoard();
	StartGame.initialDeploy();
	StartGame.printBoard();
}

StartCommand* StartCommand::clone(void) const {
	return new StartCommand(*this);
}

void StartCommand::afterExecutionMenu(void) {
	commandActiveState=false;
	this->notify();
}

} /* namespace command */
