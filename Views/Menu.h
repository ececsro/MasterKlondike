#ifndef MASTERKLONDIKE_VIEWS_MENU_H_
#define MASTERKLONDIKE_VIEWS_MENU_H_

#include <list>
#include "../Commands/Command.h"
#include "MenuPrototypeFactory.h"
#include "../Utils/IOInterface.h"

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
