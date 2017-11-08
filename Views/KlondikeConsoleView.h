#ifndef MASTERKLONDIKE_VIEWS_KLONDIKECONSOLEVIEW_H_
#define MASTERKLONDIKE_VIEWS_KLONDIKECONSOLEVIEW_H_

class StartController;
class StartView;

#include "../Controllers/ControllerVisitor.h"
#include "../Controllers/Controller.h"

class KlondikeConsoleView: public ControllerVisitor {
	StartView* startView;
public:
	KlondikeConsoleView();
	virtual ~KlondikeConsoleView();
	void interact(Controller*);
	virtual void accept(StartController*);
};

#endif /* MASTERKLONDIKE_VIEWS_KLONDIKECONSOLEVIEW_H_ */
