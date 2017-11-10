#ifndef MASTERKLONDIKE_MODELS_DECK_DECK_H_
#define MASTERKLONDIKE_MODELS_DECK_DECK_H_

#include <list>
#include "../Card.h"
using namespace std;

class Deck {
	list<Card> deck;

public:
	Deck();
	virtual ~Deck();
	void setDeck(list<Card>);
};

#endif /* MASTERKLONDIKE_MODELS_DECK_DECK_H_ */
