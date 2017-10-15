/*
 * Klondike.cpp
 *
 *  Created on: 14 oct. 2017
 *      Author: ECECSRO
 */

#include "Klondike.h"
#include "Board.h"

Klondike::Klondike() {

	// TODO Auto-generated constructor stub

}

Klondike::~Klondike() {
	// TODO Auto-generated destructor stub
}


void Klondike::play() {
  Board board;
  board.startPlay();
  board.play();
};

