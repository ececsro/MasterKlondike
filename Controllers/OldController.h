#ifndef MASTERKLONDIKE_CONTROLLERS_OLDCONTROLLER_H_
#define MASTERKLONDIKE_CONTROLLERS_OLDCONTROLLER_H_

#define NUM_OF_SUITS 4
#define NUM_OF_COLUMNS 7

class ControllerVisitor;

#include <vector>

#include "../Models/Deck/Remain.h"
#include "../Models/Deck/Tableu.h"
#include "../Models/Deck/Waste.h"

//class DeckFoundation;

#include "../Models/GameOptions.h"
#include "../Models/Game.h"
#include "../Models/Old_OldBoard.h"

class OldController {

protected:
	GameOptions* gameOptions;
	Remain* deckRemain;
	Waste* deckWaste;
	vector <Tableu*> tableu;
	Game* actualGame;
	OldBoard* actualBoard;

//	DeckFoundation **deckFoundation;

public:
	virtual ~OldController();
	OldController(OldBoard*);
	virtual void visit(ControllerVisitor* controllerVisitor) =0;
	OldBoard* getBoard();
};

#endif /* MASTERKLONDIKE_CONTROLLERS_OLDCONTROLLER_H_ */
