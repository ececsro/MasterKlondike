/*
 * Player.cpp
 *
 *  Created on: 14 oct. 2017
 *      Author: ECECSRO
 */

#include "Player.h"
#include "IOInterface.h"
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
	do
		inputString = io.getConsole();
	while (inputString.compare("Y"));
    io.putConsole(inputString);

    Rules MyRules (STANDARD);
    myRules.setInitial();
}
