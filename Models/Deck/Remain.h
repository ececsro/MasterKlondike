#ifndef MASTERKLONDIKE_MODELS_DECK_REMAIN_H_
#define MASTERKLONDIKE_MODELS_DECK_REMAIN_H_

#include "Deck.h"

class Remain: public Deck {
public:
	Remain();
	virtual ~Remain();
	void print(void);
	bool isAllowToMove(Card* );
};

#endif /* MASTERKLONDIKE_MODELS_DECK_REMAIN_H_ */
