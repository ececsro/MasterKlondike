#ifndef MASTERKLONDIKE_MODELS_DECK_DECKFACTORY_H_
#define MASTERKLONDIKE_MODELS_DECK_DECKFACTORY_H_

#include "Foundation.h"
#include "FoundationComp.h"
#include "Remain.h"
#include "Tableu.h"
#include "TableuComp.h"
#include "Waste.h"

class DeckFactory {
public:
	DeckFactory();
	virtual ~DeckFactory();
	Deck* foundationFactory(void);
	Deck* foundationCompFactory(void);
	Deck* tableuFactory(void);
	Deck* tableuCompFactory(void);
	Deck* wasteFactory(void);
	Deck* remainFactory(void);
};

#endif /* MASTERKLONDIKE_MODELS_DECK_DECKFACTORY_H_ */
