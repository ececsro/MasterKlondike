/*
 * DeckOfCards.cpp
 *
 *  Created on: 4 oct. 2017
 *      Author: ECECSRO
 */

#include "DeckOfCards.h"
#include "Card.h"
#include "IOInterface.h"
#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <time.h>
using namespace std;

DeckOfCards::DeckOfCards() {
	// TODO Auto-generated constructor stub
	TypeOfDeck=0;
	NumOfCards=52;

}


DeckOfCards::~DeckOfCards() {
	// TODO Auto-generated destructor stub
}


void DeckOfCards::createCards(void) {
	int CardId;
	for (int i=0 ; i < this->NumOfCards ; i++) {
		CardId=i;
		cout << "NumOfCards" << NumOfCards << endl;
		cout << "i" << i << endl;

		AllCardsInDeck.emplace_back(CardId);
	}
}

void DeckOfCards::shuffleDeck(void) {
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
		ShuffledDeck.emplace(*CardPosIterator);
//		CardPosIterator->printCard();
		CardsWorkCopy.erase(CardPosIterator);
	}

    ShuffledDeck.top().printCard();

/*	for (listPosition = AllCardsInDeck.begin() ; listPosition != AllCardsInDeck.end(); listPosition++) {
		listPosition->printCard();
	}
*/
}

