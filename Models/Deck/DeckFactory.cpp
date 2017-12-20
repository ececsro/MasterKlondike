#include "DeckFactory.h"

DeckFactory::DeckFactory() {
	// TODO Auto-generated constructor stub

}

DeckFactory::~DeckFactory() {
	// TODO Auto-generated destructor stub
}

Deck* DeckFactory::foundationFactory(void) {
	return (new Foundation());
}

Deck* DeckFactory::tableuFactory(void) {
	return (new Tableu());
}

Deck* DeckFactory::wasteFactory(void) {
	return (new Waste());
}

Deck* DeckFactory::remainFactory(void) {
	return (new Remain());
}

Deck* DeckFactory::foundationCompFactory(void) {
	return (new FoundationComp());
}

Deck* DeckFactory::tableuCompFactory(void) {
	return (new TableuComp());
}
