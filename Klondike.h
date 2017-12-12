#ifndef KLONDIKE_H_
#define KLONDIKE_H_

#include "Controllers/Logic.h"
#include "Views/KlondikeConsoleView.h"
#include "Views/Menu.h"

class Klondike {
	Logic logic;
    KlondikeConsoleView klondikeView;

    Board* board;
public:
	Klondike();
	virtual ~Klondike();
	void play(void);
};

#endif /* KLONDIKE_H_ */
