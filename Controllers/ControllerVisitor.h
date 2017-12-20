#ifndef MASTERKLONDIKE_CONTROLLERS_CONTROLLERVISITOR_H_
#define MASTERKLONDIKE_CONTROLLERS_CONTROLLERVISITOR_H_

class OldStartController;
class InGameController;
class OldMoveController;

class ControllerVisitor {
public:
	ControllerVisitor();
	virtual ~ControllerVisitor();
	virtual void accept(OldStartController*) =0;
	virtual void accept(InGameController*) =0;
	virtual void accept(OldMoveController*) =0;
};

#endif /* MASTERKLONDIKE_CONTROLLERS_CONTROLLERVISITOR_H_ */
