#ifndef MASTERKLONDIKE_MODELS_DECKBUILDER_H_
#define MASTERKLONDIKE_MODELS_DECKBUILDER_H_

#include <list>
#include <time.h>
#include "Deck/Deck.h"

using namespace std;

class DeckBuilder {
	list<Card> allCardsInDeck;
	list<Card> shuffledDeck;
	const int numOfCards = 52;

public:
	DeckBuilder();
	virtual ~DeckBuilder();
	DeckBuilder(Deck* );
	void construct(Deck* );
	void createCards();
	void shuffleDeck();

};

#endif /* MASTERKLONDIKE_MODELS_DECKBUILDER_H_ */
