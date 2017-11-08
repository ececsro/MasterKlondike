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
using namespace std;

Card::Card() {
	NumOfCards=52;
	CardId=NumOfCards;
	NumOfCards++;
    isVisible=false;
    isEligible=false;
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
    isVisible=false;
    isEligible=false;
}


void Card::setCardName(void) {

	CardName=NumberName[Number] + " " + SuitName[Suit];

}

void Card::printCard(void) {

	string OutputString;
	OutputString = "CardName: " + CardName;
    if (isVisible){
    	OutputString = OutputString + " IS VISIBLE";
    }

    if (isEligible){
    	OutputString = OutputString + " AND ELIGIBLE";
    }

	IOInterface ioTmp;
	ioTmp.putConsole(OutputString);
}

void Card::setCardEligible(void) {
	isEligible=true;
}

void Card::setCardVisible(void) {
	isVisible=true;
}
