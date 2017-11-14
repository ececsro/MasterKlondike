#ifndef MASTERKLONDIKE_UTILS_ALLOWEDDIALOG_H_
#define MASTERKLONDIKE_UTILS_ALLOWEDDIALOG_H_

#include "IOInterface.h"
#include <vector>

class AllowedDialog {
	string orderToValidate;

private:
	bool validateOrder(string);

public:
	AllowedDialog();
	virtual ~AllowedDialog();
	string getOrderInGame(IOInterface*);
	string getOrderMoveTo(IOInterface*);
};

#endif /* MASTERKLONDIKE_UTILS_ALLOWEDDIALOG_H_ */
