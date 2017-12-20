#include "BoardBuilder.h"

BoardBuilder::BoardBuilder() {
	// TODO Auto-generated constructor stub
}

BoardBuilder::~BoardBuilder() {
	// TODO Auto-generated destructor stub
}

void BoardBuilder::construct(void) {
	Board* Board = Board::getInstance();
	DeckFactory DeckFactory;
	Deck* AuxDeck;

	Board->setDeck(DeckFactory.remainFactory(),DeckType::REMAIN);
	Board->setDeck(DeckFactory.wasteFactory(),DeckType::WASTE);

	Board->setDeck(DeckFactory.foundationCompFactory(),DeckType::FOUNDATION);
	for (int i=0; i < (int) FoundationType::COUNT; i++){
		AuxDeck=DeckFactory.foundationFactory();
		AuxDeck->setPosition(i);
		(Board->getDeck(DeckType::FOUNDATION))->Add(AuxDeck);
	}

	Board->setDeck(DeckFactory.tableuCompFactory(),DeckType::TABLEU);
	for (int i=0; i < (int) TableuType::COUNT; i++){
		AuxDeck=DeckFactory.tableuFactory();
		AuxDeck->setPosition(i);
		(Board->getDeck(DeckType::TABLEU))->Add(AuxDeck);
	}
}
