#ifndef MASTERKLONDIKE_MODELS_DECK_FOUNDATIONCOMP_H_
#define MASTERKLONDIKE_MODELS_DECK_FOUNDATIONCOMP_H_

#include "Deck.h"

class FoundationComp: public Deck {
	vector<Deck*> Foundation;

public:
	FoundationComp();
	virtual ~FoundationComp();

	virtual void Add(Deck*);
//	virtual void Remove(Deck*);
	virtual Deck* getComposite();
	virtual Deck* getDeck(int);

	virtual void print(void);
	virtual Card* findCard(CardExtras*);

};

#endif /* MASTERKLONDIKE_MODELS_DECK_FOUNDATIONCOMP_H_ */
