/*
 * Card.h
 *
 *  Created on: 14 oct. 2017
 *      Author: ECECSRO
 */

#ifndef CARD_H_
#define CARD_H_

#include <iostream>
#include <string>
#include <assert.h>

#include "CardExtras.h"
#include "..\Utils\IOInterface.h"

using namespace std;

class Card {
	CardExtras* cardExtras;
	int cardId;

	enum SuitType {diamonds, clubs, hearts, spades} Suit;
	enum ColorType {red, black} Color;
	string SuitName [4] = {"Diamonds","Clubs","Hearts","Spades"};
	string ColorName [2] = {"Red","Black"};
	string NumberName [13] = {"Ace","2","3","4","5","6","7","8","9","10","Jack","Queen","King"};
	int NumOfCards;
	string CardName;
	bool isVisible;
	bool isEligible;
public:
	Card();
	Card(int);
	virtual ~Card();
	void setInitialValues(void);
	void setCardName(void);
	void printCard(void);
	void setCardEligible(bool);
	void setCardVisible(bool);
	bool isCardEligible(void);
	bool isCardVisible(void);
	int getCardId(void);
	bool isEqual (CardExtras*);
	bool isEqual (Card*);
	void setDeck(Deck*);
	Deck* getDeck(void);

	int compareNumberCard(int);
	int compareNumberName(string);
	int compareColor(Card*);

	int getSuit(void);
	string getNumberName();

};

#endif /* CARD_H_ */
