#ifndef MASTERKLONDIKE_CONTROLLERS_CONTROLLER_H_
#define MASTERKLONDIKE_CONTROLLERS_CONTROLLER_H_

#define NUM_OF_SUITS 4
#define NUM_OF_COLUMNS 7

class ControllerVisitor;

#include <vector>

#include "../Models/Deck/DeckRemain.h"
#include "../Models/Deck/DeckTableu.h"

//class DeckWaste;
//class DeckFoundation;

#include "../Models/GameOptions.h"
#include "../Models/Game.h"

class Controller {

protected:
	GameOptions* gameOptions;
	DeckRemain* deckRemain;
	vector <DeckTableu*> tableu;
	Game* actualGame;

//	DeckWaste *deckWaste;
//	DeckFoundation **deckFoundation;

public:
	virtual ~Controller();
	Controller(Game*);
	void setGameStatus(GameStatus);
	virtual void visit(ControllerVisitor* controllerVisitor) =0;
};

#endif /* MASTERKLONDIKE_CONTROLLERS_CONTROLLER_H_ */
