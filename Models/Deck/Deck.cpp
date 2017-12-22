#include "Deck.h"

Deck::Deck() {
	// TODO Auto-generated constructor stub
	deck.clear();

}

Deck::~Deck() {
	// TODO Auto-generated destructor stub
}

void Deck::setDeck(list<Card> & givenDeck) {
    deck = givenDeck;
}

void Deck::emplaceBackDeck(Card* newCard) {
	deck.emplace_back(*newCard);
	newCard->setDeck(this);
}

Card* Deck::backCard() {
	return (&(*(--(deck.end()))));
}

void Deck::pushBackCard(Card* newCard) {
	deck.push_back(*newCard);
	newCard->setDeck(this);
}

void Deck::popCard() {
	deck.pop_back();
}

bool Deck::isEmpty() {
	return (deck.empty());
}

Card* Deck::findCard (CardExtras* cardToFind) {

	list<Card>::iterator listPosition;

	listPosition = deck.begin();
	while (listPosition != deck.end() && !listPosition->isEqual(cardToFind)){
		listPosition++;
	}

	if (listPosition != deck.end()){
		return (&(*(listPosition)));
	}
	else {
		return (nullptr);
	}
}

/*
 list<Card>::iterator findCardIterator(Card* cardToFind) {
	list<Card>::iterator listPosition;
	listPosition = deck.begin();
	while (listPosition != deck.end() && !listPosition->isEqual(cardToFind)){
		listPosition++;
	}

	return listPosition;
}
*/

void Deck::printDeck(void) {
	for (list<Card>::iterator listPosition = deck.begin(); listPosition != deck.end(); listPosition++ ){
		listPosition->printCard();
	}
}

bool Deck::isAllowToMove(Card* cardToMove) {

	return false;
}

void Deck::Add(Deck*) {
}

Deck* Deck::getComposite() {
	return nullptr;
}

Deck* Deck::getDeck(int int1) {
	return nullptr;
}

void Deck::print(void) {
}

void Deck::setPosition(int int1) {
}

void Deck::moveCards(Card*) {
}



void Deck::modifyOriginDeck(Card* selectedCard) {
	list<Card>::iterator listPosition;
//	listPosition = this->findCardIterator(selectedCard);
	listPosition = deck.begin();
	while (listPosition != deck.end() && !listPosition->isEqual(selectedCard)){
		listPosition++;
	}

	if (listPosition != deck.begin()){
		listPosition--;
		listPosition->setCardEligible(true);
		listPosition->setCardVisible(true);
	}
}

list<Card>* Deck::getCards(Card* selectedCard) {
	list<Card>::iterator listPosition;
//	listPosition = this->findCardIterator(selectedCard);
	listPosition = deck.begin();
	while (listPosition != deck.end() && !listPosition->isEqual(selectedCard)){
		listPosition++;
	}

    list<Card>* transferCards = new list<Card>;

    transferCards->splice(transferCards->begin(),this->deck,listPosition,this->deck.end());

    return transferCards;

}

void Deck::putCards(list<Card>* transferCards) {

	for (list<Card>::iterator listPosition = transferCards->begin(); listPosition != transferCards->end(); listPosition++ ){
		listPosition->setDeck(this);
	}

	this->deck.splice(this->deck.end(),*transferCards,transferCards->begin(),transferCards->end());
}
