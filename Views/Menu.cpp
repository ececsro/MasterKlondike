#include "Menu.h"

namespace menu {

Menu::Menu() {

	inGame = true;

/*
 	command::Command* PreviousCommand, NextCommand;

	PreviousCommand = MenuFactory.makeStart();

	NextCommand = MenuFactory.makeMove();
	PreviousCommand->setNextCommand(NextCommand);
	CommandList.push_back(PreviousCommand);
	PreviousCommand = NextCommand;

	NextCommand = MenuFactory.makeRemainDeck();
	PreviousCommand->setNextCommand(NextCommand);
	CommandList.push_back(PreviousCommand);
	PreviousCommand = NextCommand;

	NextCommand = MenuFactory.makeExit();
	PreviousCommand->setNextCommand(NextCommand);
	CommandList.push_back(PreviousCommand);

	NextCommand.setNextCommand(nullptr);
	CommandList.push_back(NextCommand);
*/

	CommandList.push_back(MenuFactory.makeStart());
	CommandList.push_back(MenuFactory.makeMove());
	CommandList.push_back(MenuFactory.makeRemainDeck());
	CommandList.push_back(MenuFactory.makeExit());

	list<command::Command*>::iterator CommandIt = CommandList.begin();
	list<command::Command*>::iterator NextCommandIt = CommandIt;

	for (signed int i=0; i < (CommandList.size() - 1) ; i++ ) {
		NextCommandIt++;
		(*CommandIt)->setNextCommand( (*(NextCommandIt)) );
		CommandIt++;
	}
}

Menu::~Menu() {
	// TODO Auto-generated destructor stub
}

void Menu::execute(Board* board) {

	IOInterface* IOInterface = IOInterface::getInstance();
	string Option;
	command::Command* CommandToExecute;

	for (list<command::Command*>::iterator CommandIt = CommandList.begin(); CommandIt != CommandList.end(); CommandIt++ ){
		IOInterface->putConsole((*CommandIt)->getTitle());
	}

	do {
		Option = IOInterface->getConsole();
		CommandToExecute = (*CommandList.begin())->getCommandByOption(Option);
	    if (CommandToExecute == nullptr) {
	    	IOInterface->putConsole("Choose a valid option");
	    }
	    else {
	    	IOInterface->putConsole(CommandToExecute->getTitle());
	    	CommandToExecute->execute();
	    	inGame = CommandToExecute->isInGame();
	    }
	} while (CommandToExecute == nullptr);

}

bool Menu::isInGame(void) {
	return (this->inGame);
}

} /* namespace menu */
