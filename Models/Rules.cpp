/*
 * Rules.cpp
 *
 *  Created on: 3 oct. 2017
 *      Author: ECECSRO
 */

#include "Rules.h"

#include "DeckOfCards.h"

Rules::Rules() {
	// TODO Auto-generated constructor stub

}


Rules::~Rules() {
	// TODO Auto-generated destructor stub
}

void Rules::InitialCardDeploy(DeckOfCards DeckForRules) {
	int NumOfColumns=7;
    DeckForRules.deployInitial(NumOfColumns);

}
