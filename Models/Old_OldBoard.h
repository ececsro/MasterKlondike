#ifndef BOARD_H_
#define BOARD_H_

#define NUM_OF_COLUMNS 7
#define NUM_OF_SUITS 4

#include "../Utils/IOInterface.h"

#include "Deck/Remain.h"
#include "Deck/Tableu.h"
#include "Deck/Waste.h"
#include "Deck/Foundation.h"

#include <iostream>
using namespace std;


class OldBoard {
	friend class OldStartController;
	friend class InGameController;
	IOInterface* io;
	Remain* deckRemain;
	Waste* deckWaste;
	vector <Tableu*> tableu;
	vector <Foundation*> foundation;

protected:
	Card* findCard(string);
	Deck* findDeck(string);

public:
	OldBoard();
	virtual ~OldBoard();
	bool isCardEligible(string);
	void printBoard();
	bool checkToMove(string, string);
	void moveCards(string, string);
};

#endif /* BOARD_H_ */
