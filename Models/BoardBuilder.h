#ifndef MASTERKLONDIKE_MODELS_BOARDBUILDER_H_
#define MASTERKLONDIKE_MODELS_BOARDBUILDER_H_

#include "Board.h"
#include "Deck/DeckFactory.h"
#include "Deck/DeckType.h"
#include "FoundationType.h"
#include "TableuType.h"

class BoardBuilder {
public:
	BoardBuilder();
	virtual ~BoardBuilder();
	void construct(void);

};

#endif /* MASTERKLONDIKE_MODELS_BOARDBUILDER_H_ */
