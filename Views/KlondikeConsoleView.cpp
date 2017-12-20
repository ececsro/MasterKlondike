#include "KlondikeConsoleView.h"
#include "StartView.h"
#include "InGameView.h"
#include "MoveView.h"

KlondikeConsoleView::KlondikeConsoleView() {
	// TODO Auto-generated constructor stub
	ioConsole = IOInterface::getInstance();
}

KlondikeConsoleView::~KlondikeConsoleView() {
	// TODO Auto-generated destructor stub
}

void KlondikeConsoleView::interact(OldController* controller) {
	assert (controller!=nullptr);
	controller->visit(this);

}

void KlondikeConsoleView::accept(OldStartController* startController) {
	assert (startController!=nullptr);
    new StartView(startController);
}

void KlondikeConsoleView::accept(InGameController* inGameController) {
	assert (inGameController!=nullptr);
    new InGameView(inGameController);
}

void KlondikeConsoleView::accept(OldMoveController* moveController) {
	assert (moveController!=nullptr);
    new MoveView(moveController);
}
