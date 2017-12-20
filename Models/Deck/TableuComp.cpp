#include "TableuComp.h"

TableuComp::TableuComp() {
	// TODO Auto-generated constructor stub

}

TableuComp::~TableuComp() {
	// TODO Auto-generated destructor stub
}

void TableuComp::Add(Deck* NewDeck) {
	Tableu.push_back(NewDeck);
}

Deck* TableuComp::getComposite() {
	return this;
}

Deck* TableuComp::getDeck(int TableuPosition) {
//	assert TableuPosition >= 0;
//	assert TableuPosition < 7;
	return Tableu.at(TableuPosition);
}

void TableuComp::print(void) {
	for (int i=0; i < Tableu.size(); i++){
		Tableu.at(i)->print();
	}
}

Card* TableuComp::findCard(CardExtras* cardToFind) {
	for (int i=0; i < Tableu.size(); i++){
		Tableu.at(i)->findCard(cardToFind);
	}
}
