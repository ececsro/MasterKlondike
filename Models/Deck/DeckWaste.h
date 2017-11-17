#ifndef MASTERKLONDIKE_MODELS_DECK_DECKWASTE_H_
#define MASTERKLONDIKE_MODELS_DECK_DECKWASTE_H_

#include "Deck.h"

class DeckWaste: public Deck {
public:
	DeckWaste();
	virtual ~DeckWaste();
	void print();
	bool isAllowToMove(Card* );
};

#endif /* MASTERKLONDIKE_MODELS_DECK_DECKWASTE_H_ */
