#ifndef MASTERKLONDIKE_MODELS_GAMEOPTIONS_H_
#define MASTERKLONDIKE_MODELS_GAMEOPTIONS_H_

#define NUM_OF_CARDS 52

class GameOptions {
	int numOfCards;
	static GameOptions* _instance;

private:
	GameOptions();

public:
	virtual ~GameOptions();
	int getNumOfCards();
	static GameOptions* getInstance();
};

#endif /* MASTERKLONDIKE_MODELS_GAMEOPTIONS_H_ */
