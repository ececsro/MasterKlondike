#ifndef MASTERKLONDIKE_VIEWS_MOVEVIEW_H_
#define MASTERKLONDIKE_VIEWS_MOVEVIEW_H_

#include "../Controllers/OldMoveController.h"
#include "KlondikeConsoleView.h"

class MoveView: public KlondikeConsoleView {
public:
	MoveView();
	virtual ~MoveView();
	MoveView(OldMoveController*);

};

#endif /* MOVEVIEW_H_ */
