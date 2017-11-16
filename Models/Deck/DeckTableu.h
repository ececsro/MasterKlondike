#ifndef MASTERKLONDIKE_MODELS_DECK_DECKTABLEU_H_
#define MASTERKLONDIKE_MODELS_DECK_DECKTABLEU_H_

#include "Deck.h"

class DeckTableu: public Deck {
	int tableuPosition;
public:
	DeckTableu();
	virtual ~DeckTableu();
	void setPosition(int);
	int getPosition(void);
	void print(void);
	bool isAllowToMove(Card* );

};

#endif /* MASTERKLONDIKE_MODELS_DECK_DECKTABLEU_H_ */
