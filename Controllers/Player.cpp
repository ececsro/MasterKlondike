/*
 * Player.cpp
 *
 *  Created on: 14 oct. 2017
 *      Author: ECECSRO
 */

#include "Player.h"
#include "../Utils/IOInterface.h"
#include "../Models/DeckOfCards.h"
#include "../Models/Rules.h"
#include "../Models/DeckOfCards.h"

#include <iostream>
using namespace std;

const int STANDARD=1;

Player::Player(IOInterface& ioParam) {
	// TODO Auto-generated constructor stub
	io = ioParam;
}

Player::~Player() {
	// TODO Auto-generated destructor stub
}

void Player::setInitial() {
	string inputString="N";
	io.putConsole("Player set initial");
/*	do
		inputString = io.getConsole();
	while (inputString.compare("Y"));
    io.putConsole(inputString);
*/

    DeckOfCards DeckToPlay;
    DeckToPlay.createCards();
    DeckToPlay.shuffleDeck();

    Rules RulesToPlay;
    RulesToPlay.InitialCardDeploy(DeckToPlay);
}
