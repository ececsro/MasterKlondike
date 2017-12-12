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

//	deck.splice(deck.begin(),givenDeck,givenDeck.begin(),givenDeck.end());

/*	int copyCardId;
	IOInterface ioTmp;
	string OutputString;
	for (list<Card>::iterator listPosition = givenDeck.begin(); listPosition != givenDeck.end(); listPosition++ ){
        listPosition->printCard();
        copyCardId = listPosition->getCardId();

    	OutputString = "CardId: " + to_string(copyCardId);
    	ioTmp->putConsole(OutputString);

        this->deck.emplace_back(copyCardId);
	}

	for (list<Card>::iterator listPosition = deck.begin(); listPosition != deck.end(); listPosition++ ){
        listPosition->printCard();
//        deck.push_back(newCardToDeck);
	}

//	*deck.assign(*givenDeck);
 */
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

void Deck::printDeck(void) {
	for (list<Card>::iterator listPosition = deck.begin(); listPosition != deck.end(); listPosition++ ){
		listPosition->printCard();
	}
}
