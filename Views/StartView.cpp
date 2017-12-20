#include "StartView.h"

StartView::StartView() {
	// TODO Auto-generated constructor stub

}

StartView::~StartView() {
	// TODO Auto-generated destructor stub
}

StartView::StartView(OldStartController* controllerFromView) {
	assert (controllerFromView!=nullptr);
	controllerFromView->createDeckRemain();
	controllerFromView->initialDeploy();
}
