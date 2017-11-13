#ifndef MASTERKLONDIKE_MODELS_DECK_DECK_H_
#define MASTERKLONDIKE_MODELS_DECK_DECK_H_

#include <list>
#include <vector>
#include "../Card.h"
#include "..\..\Utils\IOInterface.h"
using namespace std;

class Deck {

protected:
	list<Card> deck;
    Card* lastCard;

public:
	Deck();
	virtual ~Deck();
	void setDeck(list<Card> &);
	void emplaceBackDeck(Card);
	Card* backCard();
	void pushBackCard(Card);
	void popCard();
};

#endif /* MASTERKLONDIKE_MODELS_DECK_DECK_H_ */
