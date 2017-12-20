#include "FoundationComp.h"

FoundationComp::FoundationComp() {
	// TODO Auto-generated constructor stub

}

FoundationComp::~FoundationComp() {
	// TODO Auto-generated destructor stub
}

void FoundationComp::Add(Deck* NewDeck) {
	Foundation.push_back(NewDeck);
}

Deck* FoundationComp::getComposite() {
	return this;
}

Deck* FoundationComp::getDeck(int FoundationPosition) {
	//	assert FoundationPosition >= 0;
	//	assert FoundationPosition < FoundationType::COUNT;
		return Foundation.at(FoundationPosition);
}

void FoundationComp::print(void) {
	for (int i=0; i < Foundation.size(); i++){
		Foundation.at(i)->print();
	}
}

Card* FoundationComp::findCard(CardExtras* cardToFind) {
	for (int i=0; i < Foundation.size(); i++){
		Foundation.at(i)->findCard(cardToFind);
	}
}
