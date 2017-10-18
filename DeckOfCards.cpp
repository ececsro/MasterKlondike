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
	for (int i=0 ; i < this->NumOfCards ; i++) {
		AllCardsInDeck[i].printCard();
	}

	Card CardToMove;
    int FirstCard;
    int SecondCard;
    int ShuffleTimes;
    const int MinShuffleTime = 1;
    const int MaxShuffleTime = 5;
    ShuffleTimes = MinShuffleTime + rand()%(MaxShuffleTime-MinShuffleTime);

    int j = 0;
    while (j < ShuffleTimes){
        FirstCard = 1 + rand()%NumOfCards;
        SecondCard = 1 + rand()%NumOfCards;
        CardToMove = AllCardsInDeck[FirstCard];
        AllCardsInDeck[FirstCard] = AllCardsInDeck[SecondCard];
        AllCardsInDeck[SecondCard] = CardToMove;
        j++
    }

	for (i=0 ; i < this->NumOfCards ; i++) {
		AllCardsInDeck[i].printCard();
	}

}

