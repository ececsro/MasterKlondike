#ifndef MASTERKLONDIKE_CONTROLLERS_CONTROLLERVISITOR_H_
#define MASTERKLONDIKE_CONTROLLERS_CONTROLLERVISITOR_H_

class StartController;
class InGameController;
class MoveController;

class ControllerVisitor {
public:
	ControllerVisitor();
	virtual ~ControllerVisitor();
	virtual void accept(StartController*) =0;
	virtual void accept(InGameController*) =0;
	virtual void accept(MoveController*) =0;
};

#endif /* MASTERKLONDIKE_CONTROLLERS_CONTROLLERVISITOR_H_ */
