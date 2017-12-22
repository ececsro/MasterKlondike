#ifndef MASTERKLONDIKE_MODELS_BOARD_H_
#define MASTERKLONDIKE_MODELS_BOARD_H_

#include "Deck/Deck.h"
#include "Deck/DeckType.h"
#include "FoundationType.h"
#include "TableuType.h"

class Board {
	static Board* instance;
	vector<Deck*> DeckSet;

protected:
	Board();
	Card* findCard(string);
	Deck* findDeck(string);

public:
	virtual ~Board();

	static Board* getInstance();

	void setDeck(Deck*, DeckType);
	Deck* getDeck(DeckType);

	void printBoard();

	bool isCardEligible(string);
	bool checkToMove(string, string);
	void moveCards(string, string);

};

#endif /* MASTERKLONDIKE_MODELS_BOARD_H_ */
