#ifndef MASTERKLONDIKE_CONTROLLERS_CONTROLLER_H_
#define MASTERKLONDIKE_CONTROLLERS_CONTROLLER_H_

class ControllerVisitor;

class Controller {

public:
	virtual ~Controller();
	Controller();
	virtual void visit(ControllerVisitor* controllerVisitor) =0;
};

#endif /* MASTERKLONDIKE_CONTROLLERS_CONTROLLER_H_ */
