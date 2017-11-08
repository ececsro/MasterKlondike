#include "StartController.h"

StartController::StartController() {
	// TODO Auto-generated constructor stub

}

StartController::~StartController() {
	// TODO Auto-generated destructor stub
}

void StartController::visit(ControllerVisitor* controllerVisitor) {
//	controllerVisitor->accept(this);
	int a=1;
	controllerVisitor->accept(this);
}
