#ifndef MASTERKLONDIKE_MODELS_DECK_TABLEU_H_
#define MASTERKLONDIKE_MODELS_DECK_TABLEU_H_

#include "Deck.h"

class Tableu: public Deck {
	int tableuPosition;
public:
	Tableu();
	virtual ~Tableu();
	void setPosition(int);
	int getPosition(void);
	void print(void);
	bool isAllowToMove(Card* );
	virtual void moveCards(Card*);

};

#endif /* MASTERKLONDIKE_MODELS_DECK_TABLEU_H_ */
