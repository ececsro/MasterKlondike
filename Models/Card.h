/*
 * Card.h
 *
 *  Created on: 14 oct. 2017
 *      Author: ECECSRO
 */

#ifndef CARD_H_
#define CARD_H_

#include <iostream>
using namespace std;

class Card {
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
	bool getCardEligible(void);
	bool getCardVisible(void);
	int getCardId(void);
};

#endif /* CARD_H_ */
