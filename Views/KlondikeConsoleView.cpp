#include <assert.h>

#include "KlondikeConsoleView.h"
#include "StartView.h"

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

IOInterface KlondikeConsoleView::getIOInterface() {
	return this->ioConsole;
}
