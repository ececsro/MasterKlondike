#ifndef MASTERKLONDIKE_MODELS_DECK_DECKREMAIN_H_
#define MASTERKLONDIKE_MODELS_DECK_DECKREMAIN_H_

#include "Deck.h"

class DeckRemain: public Deck {
public:
	DeckRemain();
	virtual ~DeckRemain();
	void print();
	bool isAllowToMove(Card* );
};

#endif /* MASTERKLONDIKE_MODELS_DECK_DECKREMAIN_H_ */
