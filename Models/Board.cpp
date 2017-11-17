/*
 * Board.cpp
 *
 *  Created on: 14 oct. 2017
 *      Author: ECECSRO
 */

#include "Board.h"


Board::Board() {
	deckRemain = new DeckRemain();
	deckWaste = new DeckWaste();

	DeckTableu* deckTableuAux;
	tableu.reserve(NUM_OF_COLUMNS);
	for (int i=0 ; i < NUM_OF_COLUMNS ; i++) {
		deckTableuAux = new DeckTableu;
		tableu.push_back(deckTableuAux);
		tableu.at(i)->setPosition(i);
	}

	DeckFoundation* deckFoundationAux;
	foundation.reserve(NUM_OF_SUITS);
	for (int i=0 ; i < NUM_OF_SUITS ; i++) {
		deckFoundationAux = new DeckFoundation;
		foundation.push_back(deckFoundationAux);
		foundation.at(i)->setFoundation(i);
	}
}

Board::~Board() {
	// TODO Auto-generated destructor stub
}

void Board::printBoard() {
	this->deckRemain->print();
    this->deckWaste->print();
	for (unsigned i=0; i < tableu.size(); i++){
		tableu[i]->print();
    }
	for (unsigned i=0; i < foundation.size(); i++){
		foundation[i]->print();
    }
}

Card* Board::findCard(string cardName) {
	CardExtras* cardToCompare = new CardExtras(cardName);
    Card* cardFound = nullptr;

    cardFound = this->deckRemain->findCard(cardToCompare);

    if (cardFound == nullptr){
        cardFound = this->deckWaste->findCard(cardToCompare);
    }

    unsigned i=0;
    while (i < tableu.size() && cardFound == nullptr){
    	cardFound = tableu[i]->findCard(cardToCompare);
    	i++;
    }
    while (i < foundation.size() && cardFound == nullptr){
    	cardFound = foundation[i]->findCard(cardToCompare);
    	i++;
    }
    delete cardToCompare;
    return (cardFound);
}

bool Board::isCardEligible(string cardName) {
	bool result = false;

    Card* cardFound = this->findCard(cardName);

    if (cardFound != nullptr){
    	result = cardFound->isCardEligible();
    }
    return (result);
}

bool Board::checkToMove(string cardName, string placeToMove) {

	bool result = false;

	Deck* deckToMove = this->findDeck(placeToMove);
	Card* cardFound = this->findCard(cardName);

    if (cardFound->isCardEligible()) {
    	result = deckToMove->isAllowToMove(cardFound);
    }
    return (result);
}

void Board::moveCards(string cardName, string placeToMove) {

	Card* cardFound = this->findCard(cardName);
	Deck* deckToMove = this->findDeck(placeToMove);

	list<Card>* cardsToMove;

}

Deck* Board::findDeck(string placeToMove) {
	Deck* deckToMove = nullptr;

	int deckIndex=0;
	switch (placeToMove.front()) {
	case '7':
		deckIndex++;
	case '6':
		deckIndex++;
	case '5':
		deckIndex++;
	case '4':
		deckIndex++;
	case '3':
		deckIndex++;
	case '2':
		deckIndex++;
	case '1':
		deckToMove = tableu[deckIndex];
		break;
	case 'S':
		deckIndex++;
	case 'H':
		deckIndex++;
	case 'C':
		deckIndex++;
	case 'D':
		deckToMove = foundation[deckIndex];
		break;
	default:
		assert (false);
	}

	return (deckToMove);
}
