#ifndef MASTERKLONDIKE_MODELS_DECKCONSTRUCTOR_H_
#define MASTERKLONDIKE_MODELS_DECKCONSTRUCTOR_H_

#include <list>
#include <time.h>
#include "GameOptions.h"
#include "Deck/Deck.h"

using namespace std;

class DeckConstructor {
	list<Card> AllCardsInDeck;
	list<Card> ShuffledDeck;
	GameOptions* gameOptions;

public:
	DeckConstructor();
	virtual ~DeckConstructor();
	DeckConstructor(GameOptions* , Deck* );
	void createCards();
	void shuffleDeck();

};

#endif /* MASTERKLONDIKE_MODELS_DECKCONSTRUCTOR_H_ */
