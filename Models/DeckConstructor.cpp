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
	deckInitial->setDeck(ShuffledDeck);

}

void DeckConstructor::createCards() {

	int CardId;
	for (int i=0 ; i < gameOptions->getNumOfCards() ; i++) {
		CardId=i;
		AllCardsInDeck.emplace_back(CardId);
	}
}

void DeckConstructor::shuffleDeck() {
/*
    Example code to follow all the list and print each card
 	list<Card>::iterator listPosition;
	for (listPosition = AllCardsInDeck.begin() ; listPosition != AllCardsInDeck.end(); listPosition++) {
		listPosition->printCard();
	}

*/
 	list<Card>::iterator CardPosIterator;
	list<Card> CardsWorkCopy = AllCardsInDeck;

	int offset;
	srand (time(NULL));
	while (CardsWorkCopy.size() != 0){
		offset = rand()%CardsWorkCopy.size();
		CardPosIterator = CardsWorkCopy.begin();
		for (int i=0; i < offset; i++){
			CardPosIterator++;
		}
		ShuffledDeck.emplace_back(*CardPosIterator);
		CardPosIterator->printCard();
		CardsWorkCopy.erase(CardPosIterator);
	}

	//	ShuffledDeck.top().printCard();
	/*	for (listPosition = AllCardsInDeck.begin() ; listPosition != AllCardsInDeck.end(); listPosition++) {
			listPosition->printCard();
		}
	*/
}

