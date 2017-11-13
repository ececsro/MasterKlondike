#ifndef MASTERKLONDIKE_MODELS_DECK_DECKREMAIN_H_
#define MASTERKLONDIKE_MODELS_DECK_DECKREMAIN_H_

class DeckTableu;

#include "Deck.h"

class DeckRemain: public Deck {
public:
	DeckRemain();
	virtual ~DeckRemain();
//	void initialDeploy(vector<DeckTableu>*);
	void print();
};

#endif /* MASTERKLONDIKE_MODELS_DECK_DECKREMAIN_H_ */
