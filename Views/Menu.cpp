#include "Menu.h"

namespace menu {

Menu::Menu() {

	inGame = true;


 	command::Command *startCommand, *auxCommand;
	startCommand = MenuFactory.makeStart();

	CommandList.push_back(startCommand);

	auxCommand = MenuFactory.makeMove();
	auxCommand->attachTo(startCommand);
	CommandList.push_back(auxCommand);

	auxCommand = MenuFactory.makeRemainDeck();
	auxCommand->attachTo(startCommand);
	CommandList.push_back(auxCommand);

	CommandList.push_back(MenuFactory.makeExit());

	list<command::Command*>::iterator CommandIt = CommandList.begin();
	list<command::Command*>::iterator NextCommandIt = CommandIt;

	for (unsigned int i=0; i < (CommandList.size() - 1) ; i++ ) {
		NextCommandIt++;
		(*CommandIt)->setNextCommand( (*(NextCommandIt)) );
		CommandIt++;
	}
}

Menu::~Menu() {
	// TODO Auto-generated destructor stub
}

void Menu::execute() {

	IOInterface* IOInterface = IOInterface::getInstance();
	string Option;
	command::Command* CommandMenu, *CommandToExecute;

	for (list<command::Command*>::iterator CommandIt = CommandList.begin(); CommandIt != CommandList.end(); CommandIt++ ){
		if ( (*CommandIt)->isCommandActive() ){
			IOInterface->putConsole((*CommandIt)->getTitle());
		}
	}

	do {
		Option = IOInterface->getConsole();
//		Option = "S";
		CommandMenu = (*CommandList.begin())->getCommandByOption(Option);
	    if (CommandMenu == nullptr) {
	    	IOInterface->putConsole("Choose a valid option");
	    }
	} while (CommandMenu == nullptr);

	IOInterface->putConsole(CommandMenu->getTitle());
	CommandToExecute = CommandMenu->clone();
	CommandToExecute->execute();

	CommandMenu->afterExecutionMenu();
	inGame = CommandMenu->isInGame();
}

bool Menu::isInGame(void) {
	return (this->inGame);
}

} /* namespace menu */

