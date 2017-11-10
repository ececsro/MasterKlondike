#ifndef MASTERKLONDIKE_VIEWS_KLONDIKECONSOLEVIEW_H_
#define MASTERKLONDIKE_VIEWS_KLONDIKECONSOLEVIEW_H_

class StartController;
class StartView;

#include "../Controllers/ControllerVisitor.h"
#include "../Controllers/Controller.h"
#include "../Utils/IOInterface.h"

class KlondikeConsoleView: public ControllerVisitor {

protected:
    IOInterface ioConsole;

public:
	KlondikeConsoleView();
	virtual ~KlondikeConsoleView();
	void interact(Controller*);
	virtual void accept(StartController*);
	IOInterface getIOInterface();
};

#endif /* MASTERKLONDIKE_VIEWS_KLONDIKECONSOLEVIEW_H_ */
