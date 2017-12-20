#ifndef MASTERKLONDIKE_MODELS_DECK_TABLEUCOMP_H_
#define MASTERKLONDIKE_MODELS_DECK_TABLEUCOMP_H_

#include "Deck.h"

class TableuComp: public Deck {
	vector<Deck*> Tableu;

public:
	TableuComp();
	virtual ~TableuComp();

	virtual void Add(Deck*);
//	virtual void Remove(Deck*);
	virtual Deck* getComposite();
	virtual Deck* getDeck(int);

	virtual void print(void);
	virtual Card* findCard(CardExtras*);
};

#endif /* MASTERKLONDIKE_MODELS_DECK_TABLEUCOMP_H_ */
