#ifndef MASTERKLONDIKE_VIEWS_MOVEVIEW_H_
#define MASTERKLONDIKE_VIEWS_MOVEVIEW_H_

#include "KlondikeConsoleView.h"
#include "../Controllers/MoveController.h"

class MoveView: public KlondikeConsoleView {
public:
	MoveView();
	virtual ~MoveView();
	MoveView(MoveController*);

};

#endif /* MOVEVIEW_H_ */
