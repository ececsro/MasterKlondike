#include <assert.h>

#include "KlondikeConsoleView.h"

class StartView;

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
    int a;
}
