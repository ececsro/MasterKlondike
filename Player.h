/*
 * Player.h
 *
 *  Created on: 14 oct. 2017
 *      Author: ECECSRO
 */

#ifndef PLAYER_H_
#define PLAYER_H_

#include "IOInterface.h"

class Player {
	IOInterface io;
public:
	Player(IOInterface&);
	virtual ~Player();
	void setInitial();
};

#endif /* PLAYER_H_ */
