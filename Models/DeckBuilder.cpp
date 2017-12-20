#include "DeckBuilder.h"

#include <assert.h>

DeckBuilder::DeckBuilder() {
	// TODO Auto-generated constructor stub

}

DeckBuilder::~DeckBuilder() {
	// TODO Auto-generated destructor stub
}

DeckBuilder::DeckBuilder(Deck* deckInitial) {
	assert (deckInitial != nullptr);

	createCards();
	shuffleDeck();
	deckInitial->setDeck(shuffledDeck);
}

void DeckBuilder::construct(Deck* deckInitial) {
	assert (deckInitial != nullptr);

	createCards();
	shuffleDeck();
	deckInitial->setDeck(shuffledDeck);
}

void DeckBuilder::createCards() {

	int CardId;
	for (int i=0 ; i < numOfCards ; i++) {
		CardId=i;
		allCardsInDeck.emplace_back(CardId);
	}
}

void DeckBuilder::shuffleDeck() {
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

