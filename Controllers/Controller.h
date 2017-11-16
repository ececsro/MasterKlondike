#ifndef MASTERKLONDIKE_CONTROLLERS_CONTROLLER_H_
#define MASTERKLONDIKE_CONTROLLERS_CONTROLLER_H_

#define NUM_OF_SUITS 4
#define NUM_OF_COLUMNS 7

class ControllerVisitor;

#include <vector>

#include "../Models/Deck/DeckRemain.h"
#include "../Models/Deck/DeckTableu.h"
#include "../Models/Deck/DeckWaste.h"

//class DeckFoundation;

#include "../Models/GameOptions.h"
#include "../Models/Game.h"
#include "../Models/Board.h"

class Controller {

protected:
	GameOptions* gameOptions;
	DeckRemain* deckRemain;
	DeckWaste* deckWaste;
	vector <DeckTableu*> tableu;
	Game* actualGame;
	Board* actualBoard;

//	DeckFoundation **deckFoundation;

public:
	virtual ~Controller();
	Controller(Game*, Board*);
	void setGameStatus(GameStatus);
	virtual void visit(ControllerVisitor* controllerVisitor) =0;
	Board* getBoard();
};

#endif /* MASTERKLONDIKE_CONTROLLERS_CONTROLLER_H_ */
