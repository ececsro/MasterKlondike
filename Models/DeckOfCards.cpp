/*
 * DeckOfCards.cpp
 *
 *  Created on: 4 oct. 2017
 *      Author: ECECSRO
 */

#include "DeckOfCards.h"

#include "..\Utils\IOInterface.h"
#include <iostream>
#include <string>
#include <iterator>
#include <time.h>

#include "Card.h"
using namespace std;

DeckOfCards::DeckOfCards() {
	// TODO Auto-generated constructor stub
	NumOfCards=52;

}


DeckOfCards::~DeckOfCards() {
	// TODO Auto-generated destructor stub
}


void DeckOfCards::createCards(void) {
	int CardId;
	for (int i=0 ; i < this->NumOfCards ; i++) {
		CardId=i;
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


//	ShuffledDeck.top().printCard();
/*	for (listPosition = AllCardsInDeck.begin() ; listPosition != AllCardsInDeck.end(); listPosition++) {
		listPosition->printCard();
	}
*/
}

void DeckOfCards::deployInitial(int NumOfColums) {

	list<Card> ColumnOfCards[NumOfColums];
	int j;
	for (int i=0; i < NumOfColums; i++){
		for (j=i; j < NumOfColums; j++){
			ColumnOfCards[j].emplace_back(ShuffledDeck.top());
			ShuffledDeck.pop();
			if (j == i){
				ColumnOfCards[j].back().setCardVisible("true");
				ColumnOfCards[j].back().setCardEligible(true);
			}
		}
	}

	IOInterface io;
	for (int i=0; i < NumOfColums; i++){

		io.putConsole("-- Column " + to_string(i+1) + " --");

		for (list<Card>::iterator listPosition = ColumnOfCards[i].begin() ; listPosition != ColumnOfCards[i].end(); listPosition++) {
			listPosition->printCard();
	    }
	}
}
