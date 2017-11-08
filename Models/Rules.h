/*
 * Rules.h
 *
 *  Created on: 3 oct. 2017
 *      Author: ECECSRO
 */

#ifndef RULES_H_
#define RULES_H_
#include "DeckOfCards.h"
class Rules {

public:
	Rules();
	Rules(int);
	virtual ~Rules();
	void setInitial();
    void InitialCardDeploy(DeckOfCards);
};

#endif /* RULES_H_ */
