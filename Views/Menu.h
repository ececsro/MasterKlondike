#ifndef MASTERKLONDIKE_VIEWS_MENU_H_
#define MASTERKLONDIKE_VIEWS_MENU_H_

class OldBoard;

#include <list>
#include "../Commands/Command.h"
#include "MenuPrototypeFactory.h"
#include "../Utils/IOInterface.h"
//#include "../Commands/StartSubject.h"

namespace menu {

class Menu {

	bool inGame;

	list<command::Command*> CommandList;

	MenuPrototypeFactory MenuFactory;

public:
	Menu();
	virtual ~Menu();
	void execute();
	bool isInGame(void);
};

} /* namespace menu */

#endif /* MASTERKLONDIKE_VIEWS_MENU_H_ */
