#ifndef MASTERKLONDIKE_VIEWS_INGAMEVIEW_H_
#define MASTERKLONDIKE_VIEWS_INGAMEVIEW_H_

#include "KlondikeConsoleView.h"

class InGameView: public KlondikeConsoleView {
public:
	InGameView();
	virtual ~InGameView();
	InGameView(InGameController*);
};

#endif /* MASTERKLONDIKE_VIEWS_INGAMEVIEW_H_ */
