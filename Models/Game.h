#ifndef MASTERKLONDIKE_CONTROLLERS_GAME_H_
#define MASTERKLONDIKE_CONTROLLERS_GAME_H_

#define NUM_OF_CARDS 52

#include "GameStatus.h"
class Game {
	GameStatus status;
    const int NumOfCards = NUM_OF_CARDS;
public:
	Game();
	virtual ~Game();
	GameStatus getStatus();
	void setStatus(GameStatus);
};

#endif /* MASTERKLONDIKE_CONTROLLERS_GAME_H_ */
