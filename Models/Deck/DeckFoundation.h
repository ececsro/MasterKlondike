#ifndef MASTERKLONDIKE_MODELS_DECK_DECKFOUNDATION_H_
#define MASTERKLONDIKE_MODELS_DECK_DECKFOUNDATION_H_

#include "Deck.h"

class DeckFoundation: public Deck {
	int foundationSuit;
public:
	DeckFoundation();
	virtual ~DeckFoundation();
	void setFoundation(int);
	int getFoundation(void);
	void print(void);
	bool isAllowToMove(Card* );
};

#endif /* MASTERKLONDIKE_MODELS_DECK_DECKFOUNDATION_H_ */
