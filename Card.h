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
	int CardId;
	enum SuitType {diamonds, clubs, hearts, spades} Suit;
	enum ColorType {red, black} Color;
	const string SuitName [4] = {"Diamonds","Clubs","Hearts","Spades"};
	const string ColorName [2] = {"Red","Black"};
	const string NumberName [13] = {"Ace","2","3","4","5","6","7","8","9","10","Jack","Queen","King"};
	int Number;
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
	void setCardEligible(void);
	void setCardVisible(void);
};

#endif /* CARD_H_ */
