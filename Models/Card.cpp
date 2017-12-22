/*
 * Card.cpp
 *
 *  Created on: 14 oct. 2017
 *      Author: ECECSRO
 */

#include "Card.h"

Card::Card() {
	NumOfCards=52;
	cardId=NumOfCards;
}

Card::Card(int CardIdParam) {

	NumOfCards=52;
	cardId=CardIdParam;
	cardExtras = new CardExtras();
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
    this->cardExtras->setCardName(CardName);

}

void Card::printCard(void) {

	string OutputString;
//  Next OutputString is for debug mode, showing the CardId. No need in production.
//	OutputString = "CardName " + to_string(cardId) + ": " + this->cardExtras->getCardName();
	OutputString = this->cardExtras->getCardName();
    if (this->isCardVisible()){
    	OutputString = OutputString + " IS VISIBLE";
    }

    if (this->isCardEligible()){
    	OutputString = OutputString + " AND ELIGIBLE";
    }

    if (this->isCardVisible()) {
    	IOInterface::getInstance()->putConsole(OutputString);
    }
//    The next 'else' is for testing purposed. Remove for production.
//    else {
//       	IOInterface::getInstance()->putConsole(OutputString);
//    }
}


void Card::setCardEligible(bool eligible) {
	isEligible=eligible;
}

void Card::setCardVisible(bool visible) {
	isVisible=visible;
}

bool Card::isCardEligible(void) {
	return (isEligible);
}

bool Card::isCardVisible(void) {
	return (isVisible);
}

int Card::getCardId(void) {
	return (cardId);
}

bool Card::isEqual(CardExtras* cardToCompare) {
	return (this->cardExtras->isEqual(cardToCompare));
}

bool Card::isEqual(Card* cardToCompare) {
	return (this->cardExtras->isEqual(cardToCompare->cardExtras));
}

void Card::setDeck(Deck* deckWhereCardIs) {
	this->cardExtras->setDeck(deckWhereCardIs);
}

Deck* Card::getDeck(void) {
	return (this->cardExtras->getDeck());
}

int Card::compareNumberName(string nameNumberToCompare) {
	CardExtras* cardExtraAux = new CardExtras(nameNumberToCompare);

	return (this->cardExtras->compareNumber(cardExtraAux));
}

int Card::getSuit(void) {
	return (this->cardExtras->getSuit());
}

int Card::compareColor(Card* cardToCompare) {
	return (this->cardExtras->compareColor(cardToCompare->cardExtras));
}

int Card::compareNumberCard(int numberCardToCompare) {
	CardExtras* cardExtraAux = new CardExtras(numberCardToCompare);
	return (this->cardExtras->compareNumber(cardExtraAux));
}

string Card::getNumberName() {
	return (this->cardExtras->getNumberName());

}
