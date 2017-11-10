#ifndef MASTERKLONDIKE_CONTROLLERS_CONTROLLER_H_
#define MASTERKLONDIKE_CONTROLLERS_CONTROLLER_H_

#define NUM_OF_SUITS 4
#define NUM_OF_COLUMNS 7

class ControllerVisitor;

#include "../Models/Deck/DeckRemain.h"
//class DeckWaste;
//class DeckFoundation;
//class DeckColumn;

#include "../Models/GameOptions.h"

class Controller {

protected:
	GameOptions* gameOptions;
	DeckRemain* deckRemain;
//	DeckWaste *deckWaste;
//	DeckFoundation **deckFoundation;
//	DeckColumn **deckColumn;

public:
	virtual ~Controller();
	Controller();
	virtual void visit(ControllerVisitor* controllerVisitor) =0;
};

#endif /* MASTERKLONDIKE_CONTROLLERS_CONTROLLER_H_ */
