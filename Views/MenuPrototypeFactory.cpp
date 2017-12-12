#include "MenuPrototypeFactory.h"

namespace menu {

MenuPrototypeFactory::MenuPrototypeFactory() {

	PrototypeExit = new command::ExitCommand();
	PrototypeMove = new command::MoveCommand();
	PrototypeStart = new command::StartCommand();
	PrototypeTouchRemainDeck = new command::TouchRemainDeckCommand();
}

MenuPrototypeFactory::~MenuPrototypeFactory() {
	// TODO Auto-generated destructor stub
}

command::Command* MenuPrototypeFactory::makeExit(void) {
	return (new command::ExitCommand());
}

command::Command* MenuPrototypeFactory::makeMove(void) {
	return (new command::MoveCommand());
}

command::Command* MenuPrototypeFactory::makeStart(void) {
	return (new command::StartCommand());
}

command::Command* MenuPrototypeFactory::makeRemainDeck(void) {
	return (new command::TouchRemainDeckCommand());
}

} /* namespace menu */
