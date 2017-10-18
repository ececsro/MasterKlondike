/*
 * DeckOfCards.h
 *
 *  Created on: 4 oct. 2017
 *      Author: ECECSRO
 */

#ifndef DECKOFCARDS_H_
#define DECKOFCARDS_H_
#include "Card.h"
#include <vector>
#include <list>
#include <stack>
using namespace std;
class DeckOfCards {
	int TypeOfDeck;
	list<Card> AllCardsInDeck;
	stack<Card> ShuffledDeck;

protected:
	int NumOfCards;
public:
	DeckOfCards();
	virtual ~DeckOfCards();
	void createCards(void);
	void shuffleDeck(void);
	void deployInitial(int);
};

#endif /* DECKOFCARDS_H_ */
