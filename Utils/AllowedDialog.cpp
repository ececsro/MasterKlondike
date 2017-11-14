#include "AllowedDialog.h"

AllowedDialog::AllowedDialog() {
	// TODO Auto-generated constructor stub
}

AllowedDialog::~AllowedDialog() {
	// TODO Auto-generated destructor stub
}

string AllowedDialog::getOrderInGame(IOInterface* ioInterface) {

	do {
		orderToValidate = ioInterface->getConsole();
	} while (!this->validateOrder(orderToValidate));
	return (orderToValidate);
}

bool AllowedDialog::validateOrder(string orderToValidate) {
	bool result;
	int numberToValidate = std::stoi(orderToValidate);
	switch (numberToValidate) {
		case 1:
		case 2:
		case 3:
			result=true;
			break;
		default:
			result=false;
	}
    return (result);
}

string AllowedDialog::getOrderMoveTo(IOInterface* ioInterface) {
	return ("echo");
}
