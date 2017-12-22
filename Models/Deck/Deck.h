#ifndef MASTERKLONDIKE_MODELS_DECK_DECK_H_
#define MASTERKLONDIKE_MODELS_DECK_DECK_H_

#include <list>
#include <vector>
#include "../Card.h"
#include "..\..\Utils\IOInterface.h"
#include "DeckType.h"

using namespace std;

class Deck {

protected:
    list<Card> deck;
    Card* lastCard;

    void printDeck(void);

public:
	Deck();
	virtual ~Deck();
	void setDeck(list<Card> &);
	void emplaceBackDeck(Card*);
	Card* backCard();
	void pushBackCard(Card*);
	void popCard();
	bool isEmpty();
	virtual Card* findCard(CardExtras*);
//	virtual bool isAllowToMove(Card* cardToMove) =0;
	virtual bool isAllowToMove(Card* cardToMove);

	virtual void Add(Deck*);
//	virtual void Remove(Deck*);
	virtual Deck* getComposite();
	virtual Deck* getDeck(int);

	virtual void print(void);
	virtual void setPosition(int);

//	list<Card>::iterator findCardIterator(Card*);
	virtual void moveCards(Card*);
	virtual list<Card>* getCards(Card*);
	virtual void modifyOriginDeck(Card*);
	virtual void putCards(list<Card>*);

};

#endif /* MASTERKLONDIKE_MODELS_DECK_DECK_H_ */
