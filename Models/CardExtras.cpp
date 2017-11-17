#include "CardExtras.h"

CardExtras::CardExtras() {
	// TODO Auto-generated constructor stub

}

CardExtras::CardExtras(int cardNumberToCreate) {
	cardNumber = cardNumberToCreate;
}

CardExtras::CardExtras(string cardName) {
	this->setCardName(cardName);
}

CardExtras::~CardExtras() {
	// TODO Auto-generated destructor stub
}

void CardExtras::setCardName(string newCardName) {
	cardName = newCardName;

	cardNumberName = cardName.substr( 0 , newCardName.find_first_of(" "));

	size_t position = string::npos;
	unsigned i=0;
	while (i < (sizeof(NumberName)/sizeof(NumberName[0])) && (position == string::npos )){
		position = cardNumberName.find(NumberName[i]);
		i++;
	}
	if (position != string::npos) {
		cardNumber = --i;
	}
	else {
		assert (false);
	}

	string suitNameAux = cardName.substr( (newCardName.find_first_of(" ")));


	position = string::npos;
	i = 0;
	while (i < (sizeof(SuitName)/sizeof(SuitName[0])) && (position == string::npos )){
		position = suitNameAux.find(SuitName[i]);
		i++;
	}
	if (position != string::npos) {
		cardSuitNumber = --i;
	}
	else {
		assert (false);
	}


}

string CardExtras::getCardName(void) {
	return (cardName);
}

bool CardExtras::isEqual(CardExtras* cardToCompare) {
    bool result = false;
	if (this->cardName == cardToCompare->cardName) {
		result = true;
	}
	return (result);
}

void CardExtras::setDeck(Deck* deckToStore) {
	deckWhereCardIs = deckToStore;
}

Deck* CardExtras::getDeck(void) {
	return (deckWhereCardIs);
}

int CardExtras::getSuit(void) {
	return (this->cardSuitNumber);
}

string CardExtras::getNumberName(void) {
	return (this->cardNumberName);
}

int CardExtras::getNumber(void) {
	return (this->cardNumber);
}

int CardExtras::compareNumber(CardExtras* cardToCompare) {
	return (this->getNumber() - cardToCompare->getNumber());
}

int CardExtras::compareColor(CardExtras* cardToCompare) {
	int colorThis;
	int colorCompare;

	switch (this->getSuit()) {
	case 0:
	case 2:
		colorThis = 0;
		break;
	case 1:
	case 3:
		colorThis = 1;
		break;
	default:
		;
	}

	switch (cardToCompare->getSuit()) {
	case 0:
	case 2:
		colorCompare = 0;
		break;
	case 1:
	case 3:
		colorCompare = 1;
		break;
	default:
		;
	}

	return (colorThis - colorCompare) ;
}
