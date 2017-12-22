#include "Board.h"

Board* Board::instance = nullptr;

Board::Board() {
	DeckSet.resize((int) DeckType::COUNT);
}

Board::~Board() {
	// TODO Auto-generated destructor stub
}

Board* Board::getInstance() {
		if (instance == nullptr) {
			instance = new Board;
		}
		return instance;
}

void Board::setDeck(Deck* DeckParam, DeckType enumDeckType) {
	DeckSet.at((int) enumDeckType) = DeckParam;
}

Deck* Board::getDeck(DeckType enumDeckType) {
	return DeckSet.at((int) enumDeckType);
}

Card* Board::findCard(string cardName) {
	CardExtras* cardToCompare = new CardExtras(cardName);
    Card* cardFound = nullptr;

	for ( int i=0; cardFound == nullptr ; i++){
		cardFound=(DeckSet.at(i))->findCard(cardToCompare);
	}

    delete cardToCompare;
    return (cardFound);
}

Deck* Board::findDeck(string placeToMove) {
	Deck* deckToMove = nullptr;
	int foundationId;

	switch (placeToMove.front()) {
	case '7':
	case '6':
	case '5':
	case '4':
	case '3':
	case '2':
	case '1':
		deckToMove = this->DeckSet.at((int) DeckType::TABLEU)->getDeck((int) (placeToMove.front() - 1));
		break;
	case 'S':
	    foundationId = (int) FoundationType::SPADES;
		break;
	case 'H':
	    foundationId = (int) FoundationType::HEARTS;
		break;
	case 'C':
	    foundationId = (int) FoundationType::CLUBS;
		break;
	case 'D':
	    foundationId = (int) FoundationType::DIAMONDS;
		break;
	default:
		assert (false);
	}

	if (deckToMove == nullptr){
		deckToMove = this->DeckSet.at((int) DeckType::FOUNDATION)->getDeck(foundationId);
	}
	return (deckToMove);
}

void Board::printBoard() {
	for ( int i=0; i < (int) DeckType::COUNT; i++){
		(DeckSet.at(i))->print();
	}
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

	cardFound->getDeck()->modifyOriginDeck(cardFound);

	cardsToMove = cardFound->getDeck()->getCards(cardFound);

	deckToMove->putCards(cardsToMove);
}
