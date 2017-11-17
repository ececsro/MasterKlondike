#include "Klondike.h"

#include "Controllers/controller.h"

Klondike::Klondike() {

	// TODO Auto-generated constructor stub

}

Klondike::~Klondike() {
	// TODO Auto-generated destructor stub
}


void Klondike::play() {
	Controller* nextController;
	do {
		nextController = logic.getNextController();
		if (nextController != nullptr) {
			klondikeView.interact(nextController);
		}
	} while (nextController != nullptr);

};

