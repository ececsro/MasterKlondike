#include <assert.h>
#include "DeckConstructor.h"

DeckConstructor::DeckConstructor() {
	// TODO Auto-generated constructor stub

}

DeckConstructor::~DeckConstructor() {
	// TODO Auto-generated destructor stub
}

DeckConstructor::DeckConstructor(GameOptions* gameOptionsParam, Deck* deckInitial) {
	assert (gameOptionsParam != nullptr);
	assert (deckInitial != nullptr);

	gameOptions = gameOptionsParam;

	createCards();
	shuffleDeck();
	deckInitial->setDeck(shuffledDeck);
}

void DeckConstructor::createCards() {

	int CardId;
	for (int i=0 ; i < numOfCards ; i++) {
		CardId=i;
		allCardsInDeck.emplace_back(CardId);
	}
}

void DeckConstructor::shuffleDeck() {
 	list<Card>::iterator cardPosition;
	list<Card> CardsWorkCopy = allCardsInDeck;

	int offset;
	srand (time(NULL));
	while (CardsWorkCopy.size() != 0){
		offset = rand()%CardsWorkCopy.size();
		cardPosition = CardsWorkCopy.begin();
		for (int i=0; i < offset; i++){
			cardPosition++;
		}
		shuffledDeck.emplace_back(*cardPosition);
		CardsWorkCopy.erase(cardPosition);
	}
}

