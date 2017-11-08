#ifndef MASTERKLONDIKE_CONTROLLERS_GAME_H_
#define MASTERKLONDIKE_CONTROLLERS_GAME_H_

class Game {
	enum StatusType {START, IN_GAME, FINISH} Status;

public:
	Game();
	virtual ~Game();
};

#endif /* MASTERKLONDIKE_CONTROLLERS_GAME_H_ */
