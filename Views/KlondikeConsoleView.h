#ifndef MASTERKLONDIKE_VIEWS_KLONDIKECONSOLEVIEW_H_
#define MASTERKLONDIKE_VIEWS_KLONDIKECONSOLEVIEW_H_

#include <assert.h>

#include "../Controllers/ControllerVisitor.h"
#include "../Controllers/StartController.h"
#include "../Controllers/InGameController.h"
#include "../Utils/IOInterface.h"
#include "../Utils/AllowedDialog.h"

class KlondikeConsoleView: public ControllerVisitor {

protected:
    IOInterface ioConsole;

public:
	KlondikeConsoleView();
	virtual ~KlondikeConsoleView();
	void interact(Controller*);
	virtual void accept(StartController*);
	virtual void accept(InGameController*);
	IOInterface getIOInterface();
};

#endif /* MASTERKLONDIKE_VIEWS_KLONDIKECONSOLEVIEW_H_ */
