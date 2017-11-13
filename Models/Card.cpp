/*
 * Card.cpp
 *
 *  Created on: 14 oct. 2017
 *      Author: ECECSRO
 */

#include "Card.h"

#include "..\Utils\IOInterface.h"
#include <string>
#include <iostream>
#include <assert.h>
using namespace std;

Card::Card() {
	NumOfCards=52;
	cardId=NumOfCards;
}

Card::Card(int CardIdParam) {

	NumOfCards=52;
	cardId=CardIdParam;
    setInitialValues();

}
Card::~Card() {
	// TODO Auto-generated destructor stub
}

void Card::setInitialValues(void) {
	int SuitNum;
	SuitNum=(cardId / (this->NumOfCards/4));

	switch (SuitNum){
	case 0:
		Suit = diamonds;
		Color = red;
		break;
	case 1:
		Suit = clubs;
		Color = black;
		break;
	case 2:
		Suit = hearts;
		Color = red;
		break;
	case 3:
		Suit = spades;
		Color = black;
		break;
	default:
		break;
	}

	setCardName();
    isVisible=false;
    isEligible=false;
}


void Card::setCardName(void) {

	int numberDigits=(cardId - ((this->NumOfCards/4)*Suit));
	CardName=NumberName[numberDigits] + " " + SuitName[Suit];

}

void Card::printCard(void) {

	string OutputString;
	OutputString = "CardName " + to_string(cardId) + ": " + CardName;
    if (isVisible){
    	OutputString = OutputString + " IS VISIBLE";
    }

    if (isEligible){
    	OutputString = OutputString + " AND ELIGIBLE";
    }

	IOInterface ioTmp;
	ioTmp.putConsole(OutputString);
}

void Card::setCardEligible(bool eligible) {
	isEligible=eligible;
}

void Card::setCardVisible(bool visible) {
	isVisible=visible;
}

bool Card::getCardEligible(void) {
	return (isEligible);
}

bool Card::getCardVisible(void) {
	return (isVisible);
}

int Card::getCardId(void) {
	return (cardId);
}
