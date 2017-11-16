#ifndef MASTERKLONDIKE_MODELS_CARDEXTRAS_H_
#define MASTERKLONDIKE_MODELS_CARDEXTRAS_H_

class Deck;

#include <string>
#include <assert.h>

using namespace std;

class CardExtras {
	string cardName;
	string cardNumberName;
	int cardSuitNumber;
	int cardNumber;


	Deck* deckWhereCardIs;

	enum SuitType {diamonds, clubs, hearts, spades} Suit;
	enum ColorType {red, black} Color;
	string SuitName [4] = {"Diamonds","Clubs","Hearts","Spades"};
	string ColorName [2] = {"Red","Black"};
	string NumberName [13] = {"Ace","2","3","4","5","6","7","8","9","10","Jack","Queen","King"};

public:
	CardExtras();
	CardExtras(string);
	virtual ~CardExtras();
	void setCardName(string);
	string getCardName (void);
	bool isEqual(CardExtras*);
	void setDeck(Deck*);
	Deck* getDeck(void);
	int getSuit (void);
	string getNumberName(void);
	int getNumber(void);
	int compareNumber(CardExtras*);
	int compareColor(CardExtras*);
};

#endif /* MASTERKLONDIKE_MODELS_CARDEXTRAS_H_ */
