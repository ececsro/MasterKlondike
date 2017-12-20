#ifndef MASTERKLONDIKE_MODELS_DECK_WASTE_H_
#define MASTERKLONDIKE_MODELS_DECK_WASTE_H_

#include "Deck.h"

class Waste: public Deck {
public:
	Waste();
	virtual ~Waste();
	void print();
	bool isAllowToMove(Card* );
};

#endif /* MASTERKLONDIKE_MODELS_DECK_WASTE_H_ */
