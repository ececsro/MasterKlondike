#ifndef BOARD_H_
#define BOARD_H_

#define NUM_OF_COLUMNS 7
#define NUM_OF_SUITS 4

#include "../Utils/IOInterface.h"

#include "../Models/Deck/DeckRemain.h"
#include "../Models/Deck/DeckTableu.h"
#include "../Models/Deck/DeckWaste.h"
#include "../Models/Deck/DeckFoundation.h"

#include <iostream>
using namespace std;


class Board {
	friend class StartController;
	friend class InGameController;
	IOInterface io;
	DeckRemain* deckRemain;
	DeckWaste* deckWaste;
	vector <DeckTableu*> tableu;
	vector <DeckFoundation*> foundation;

protected:
	Card* findCard(string);
	Deck* findDeck(string);

public:
	Board();
	virtual ~Board();
	bool isCardEligible(string);
	void printBoard();
	bool checkToMove(string, string);
	void moveCards(string, string);


};

#endif /* BOARD_H_ */
