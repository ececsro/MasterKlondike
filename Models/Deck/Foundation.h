#ifndef MASTERKLONDIKE_MODELS_DECK_FOUNDATION_H_
#define MASTERKLONDIKE_MODELS_DECK_FOUNDATION_H_

#include "Deck.h"
#include "../FoundationType.h"

class Foundation: public Deck {
	int foundationSuit;
public:
	Foundation();
	virtual ~Foundation();
	void setFoundation(int);
	int getFoundation(void);
	void print(void);
	bool isAllowToMove(Card* );
	void setPosition(int);
	int getPosition(void);

};

#endif /* MASTERKLONDIKE_MODELS_DECK_FOUNDATION_H_ */
