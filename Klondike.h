#ifndef KLONDIKE_H_
#define KLONDIKE_H_

#include "Controllers/Logic.h"
#include "Views/KlondikeConsoleView.h"

class Klondike {
	Logic logic;
    KlondikeConsoleView klondikeView;

public:
	Klondike();
	virtual ~Klondike();
	void play(void);
};

#endif /* KLONDIKE_H_ */
