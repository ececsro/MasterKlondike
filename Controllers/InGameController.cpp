#include "InGameController.h"

InGameController::InGameController(Game* gameParam) : Controller (gameParam) {
	// TODO Auto-generated constructor stub

}

InGameController::~InGameController() {
	// TODO Auto-generated destructor stub
}

void InGameController::visit(ControllerVisitor* controllerVisitor) {
	controllerVisitor->accept(this);
}

void InGameController::finishGame() {
	actualGame->setStatus(GameStatus::FINISH);

}
