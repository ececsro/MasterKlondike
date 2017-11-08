#ifndef MASTERKLONDIKE_VIEWS_STARTVIEW_H_
#define MASTERKLONDIKE_VIEWS_STARTVIEW_H_

#include "KlondikeConsoleView.h"

class StartView: public KlondikeConsoleView {


public:
	StartView();
	virtual ~StartView();
	StartView(StartController*);
};

#endif /* MASTERKLONDIKE_VIEWS_STARTVIEW_H_ */
