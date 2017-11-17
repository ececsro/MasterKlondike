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

string AllowedDialog::getCardName(IOInterface* ioInterface) {

	string numberNameGiven;
	string suitNameGiven;
	do {
		ioInterface->putConsole("  Enter Card Name: Ace 2 3 4 5 6 7 8 9 Jack Queen King");
		numberNameGiven = ioInterface->getConsole();
	} while (!this->validateCardNumber(numberNameGiven));

	do {
		ioInterface->putConsole("  Enter Card Suit: Diamonds Clubs Hearts Spades");
		suitNameGiven = ioInterface->getConsole();
	} while (!this->validateCardSuit(suitNameGiven));

	orderToValidate = numberNameGiven + " " + suitNameGiven;

	return (orderToValidate);
}

string AllowedDialog::getPlaceToMove(IOInterface* ioInterface) {

	string placeToMove;
	do {
		placeToMove = ioInterface->getConsole();
	} while (!this->validatePlaceToMove(placeToMove));

	orderToValidate = placeToMove;

	return (orderToValidate);
}

bool AllowedDialog::validateOrder(string& orderToValidate) {
	bool result;
	int numberToValidate = std::stoi(orderToValidate);
	switch (numberToValidate) {
		case 4:
		case 2:
		case 3:
			result=true;
			break;
		default:
			result=false;
	}
    return (result);
}

bool AllowedDialog::validateCardNumber(string& orderToValidate) {
	bool result = false;

	size_t numberPos = string::npos;
	unsigned i=0;
	while (i < (sizeof(NumberName)/sizeof(NumberName[0])) && (numberPos == string::npos )){
		numberPos = orderToValidate.find(NumberName[i]);
		i++;
	}

	if (numberPos != string::npos) {
		orderToValidate = NumberName[i-1];
		result = true;
	}
    return (result);
}

bool AllowedDialog::validateCardSuit(string& orderToValidate) {
	bool result = false;

	size_t suitPos = string::npos;
	unsigned i=0;
	while (i < (sizeof(SuitName)/sizeof(SuitName[0])) && (suitPos == string::npos )){
		suitPos = orderToValidate.find(SuitName[i]);
		i++;
	}

	if (suitPos != string::npos) {
		orderToValidate = SuitName[i-1];
		result = true;
	}
    return (result);
}

bool AllowedDialog::validatePlaceToMove(string& orderToValidate) {
	bool result = false;

	size_t placePos = string::npos;
	unsigned i=0;
	while (i < (sizeof(placeToMove)/sizeof(placeToMove[0])) && (placePos == string::npos )){
		placePos = orderToValidate.find(placeToMove[i]);
		i++;
	}

	if (placePos != string::npos) {
		orderToValidate = placeToMove[i-1];
		result = true;
	}
    return (result);
}

string AllowedDialog::getOrderMoveTo(IOInterface* ioInterface) {
	return ("echo");
}
