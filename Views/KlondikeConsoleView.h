#ifndef MASTERKLONDIKE_VIEWS_KLONDIKECONSOLEVIEW_H_
#define MASTERKLONDIKE_VIEWS_KLONDIKECONSOLEVIEW_H_

#include <assert.h>

#include "../Controllers/ControllerVisitor.h"
#include "../Controllers/InGameOldController.h"
#include "../Controllers/OldMoveController.h"
#include "../Controllers/OldStartOldController.h"
#include "../Utils/IOInterface.h"
#include "../Utils/AllowedDialog.h"

class KlondikeConsoleView: public ControllerVisitor {

protected:
    IOInterface* ioConsole;

public:
	KlondikeConsoleView();
	virtual ~KlondikeConsoleView();
	void interact(OldController*);
	virtual void accept(OldStartController*);
	virtual void accept(InGameController*);
	virtual void accept(OldMoveController*);
};

#endif /* MASTERKLONDIKE_VIEWS_KLONDIKECONSOLEVIEW_H_ */
