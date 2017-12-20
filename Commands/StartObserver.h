#ifndef MASTERKLONDIKE_COMMANDS_STARTOBSERVER_H_
#define MASTERKLONDIKE_COMMANDS_STARTOBSERVER_H_


namespace command {
class StartSubject;

class StartObserver {

public:
	StartObserver();
	virtual ~StartObserver();
	virtual void update(StartSubject* startCommand)=0;
};

} /* namespace command */

#endif /* MASTERKLONDIKE_COMMANDS_STARTOBSERVER_H_ */
