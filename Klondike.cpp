#include "Klondike.h"
#include "Controllers/controller.h"

Klondike::Klondike() {
}

Klondike::~Klondike() {
}

void Klondike::play() {
	menu::Menu* mainMenu = new menu::Menu();

	do {
			mainMenu->execute();
		}
	while (mainMenu->isInGame() == true);
};

