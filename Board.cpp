/*
 * Board.cpp
 *
 *  Created on: 14 oct. 2017
 *      Author: ECECSRO
 */

#include "Board.h"
#include "Player.h"
#include "IOInterface.h"

#include <iostream>
using namespace std;

Board::Board() {
	// TODO Auto-generated constructor stub

}

Board::~Board() {
	// TODO Auto-generated destructor stub
}

void Board::startPlay() {
    io.putConsole("Hi");
    Player Player1(io);
    Player1.setInitial();
	this->showBoard();
}

void Board::play() {
	io.putConsole("Playing");
}

void Board::showBoard() {
	io.putConsole("board showBoard");
}
