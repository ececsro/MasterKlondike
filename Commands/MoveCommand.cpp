#include "MoveCommand.h"

namespace command {

MoveCommand::MoveCommand() {
	Title = "(M)ove Card";
	ValidOptions.emplace("M");
	ValidOptions.emplace("m");

	commandActiveState=false;
}

MoveCommand::~MoveCommand() {
	// TODO Auto-generated destructor stub
}

MoveCommand::MoveCommand(const MoveCommand& OriginalCommand) {
	this->Title = OriginalCommand.Title;

}

void MoveCommand::execute() {
	IOInterface* ioConsole = IOInterface::getInstance();
	ioConsole->putConsole("Enter Name and Suit of the card you want to move:");
	ioConsole->putConsole(" Examples: 5 Diamonds, Ace Clubs , 3 Hearts or Jack Spades");
	AllowedDialog dialog;
	cardName=dialog.getCardName(ioConsole);

	ioConsole->putConsole(" Given card Name: " + cardName);

	ioConsole->putConsole("Enter place to move: ");
	ioConsole->putConsole(" To Tableu:      1 2 3 4 5 6 7");
	ioConsole->putConsole(" To Foundations: (D)iamonds (C)lubs (H)earts (S)pades");

    destinationPlace=dialog.getPlaceToMove(ioConsole);

	controller::MoveController moveController;

	// originalPlace = moveController.getCardPosition(cardName);

	if (!moveController.moveCard(cardName, destinationPlace)){
		ioConsole->putConsole("Card movement not allowed");
	}
	else{
		ioConsole->putConsole("Card movement is allowed");
		moveController.printBoard();
	}
}

MoveCommand* MoveCommand::clone(void) const {
	return (new MoveCommand(*this));
}

void MoveCommand::update(StartSubject* startCommand) {
	this->commandActiveState = true;
}

void MoveCommand::attachTo(Command* startCommand) {
	dynamic_cast<StartSubject*>(startCommand)->attach(this);
}

void MoveCommand::afterExecutionMenu(void) {
}

} /* namespace command */
