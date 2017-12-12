#ifndef MASTERKLONDIKE_VIEWS_MENUPROTOTYPEFACTORY_H_
#define MASTERKLONDIKE_VIEWS_MENUPROTOTYPEFACTORY_H_

#include "../Commands/ExitCommand.h"
#include "../Commands/MoveCommand.h"
#include "../Commands/StartCommand.h"
#include "../Commands/TouchRemainDeckCommand.h"

namespace menu {

class MenuPrototypeFactory {

	command::ExitCommand* PrototypeExit;
	command::MoveCommand* PrototypeMove;
	command::StartCommand* PrototypeStart;
	command::TouchRemainDeckCommand* PrototypeTouchRemainDeck;

public:
	MenuPrototypeFactory();
	virtual ~MenuPrototypeFactory();
	command::Command* makeExit(void);
	command::Command* makeMove(void);
	command::Command* makeStart(void);
	command::Command* makeRemainDeck(void);
};

} /* namespace menu */

#endif /* MASTERKLONDIKE_VIEWS_MENUPROTOTYPEFACTORY_H_ */
