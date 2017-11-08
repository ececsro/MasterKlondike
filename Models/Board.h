/*
 * Board.h
 *
 *  Created on: 14 oct. 2017
 *      Author: ECECSRO
 */

#ifndef BOARD_H_
#define BOARD_H_
#include "../Utils/IOInterface.h"

class Board {
	IOInterface io;

public:
	Board();
	virtual ~Board();
	void startPlay();
	void play();
	void showBoard();
};

#endif /* BOARD_H_ */
