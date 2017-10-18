/*
 * Card.cpp
 *
 *  Created on: 14 oct. 2017
 *      Author: ECECSRO
 */

#include "Card.h"
#include "IOInterface.h"
#include <iostream>
using namespace std;

Card::Card() {
	NumOfCards=52;
	CardId=NumOfCards;
	NumOfCards++;
}

Card::Card(int CardIdParam) {
	NumOfCards=52;
	CardId=CardIdParam;
    setInitialValues();
}
Card::~Card() {
	// TODO Auto-generated destructor stub
}

void Card::setInitialValues(void) {
    int SuitNum;
	SuitNum=(CardId / (this->NumOfCards/4));

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
	}

	Number=(CardId - ((this->NumOfCards/4)*Suit));
	setCardName();

}


void Card::setCardName(void) {

	CardName=NumberName[Number] + " " + SuitName[Suit];

}

void Card::printCard(void) {
	IOInterface ioTmp;

	ioTmp.putConsole("CardName: " + CardName);
}
