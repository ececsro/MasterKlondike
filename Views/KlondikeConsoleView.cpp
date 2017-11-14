#include "KlondikeConsoleView.h"
#include "StartView.h"
#include "InGameView.h"

KlondikeConsoleView::KlondikeConsoleView() {
	// TODO Auto-generated constructor stub
}

KlondikeConsoleView::~KlondikeConsoleView() {
	// TODO Auto-generated destructor stub
}

void KlondikeConsoleView::interact(Controller* controller) {
	assert (controller!=nullptr);
	controller->visit(this);

}

void KlondikeConsoleView::accept(StartController* startController) {
	assert (startController!=nullptr);
    new StartView(startController);
}

void KlondikeConsoleView::accept(InGameController* inGameController) {
	assert (inGameController!=nullptr);
    new InGameView(inGameController);
}

IOInterface KlondikeConsoleView::getIOInterface() {
	return this->ioConsole;
}
