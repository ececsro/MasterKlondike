#ifndef MASTERKLONDIKE_UTILS_ALLOWEDDIALOG_H_
#define MASTERKLONDIKE_UTILS_ALLOWEDDIALOG_H_

#include "IOInterface.h"

class AllowedDialog {
	string orderToValidate;
	string SuitName [4] = { "Diamonds","Clubs","Hearts","Spades"};
	string ColorName [2] = {"Red","Black"};
	string NumberName [13] = {"Ace","2","3","4","5","6","7","8","9","10","Jack","Queen","King"};
	string placeToMove [11] = {"1","2","3","4","5","6","7","D","C","H","S"};

private:
	bool validateOrder(string&);
	bool validateCardNumber(string&);
	bool validateCardSuit(string&);
	bool validatePlaceToMove(string&);

public:
	AllowedDialog();
	virtual ~AllowedDialog();
	string getOrderInGame(IOInterface*);
	string getCardName(IOInterface*);
	string getPlaceToMove(IOInterface*);
	string getOrderMoveTo(IOInterface*);
};

#endif /* MASTERKLONDIKE_UTILS_ALLOWEDDIALOG_H_ */
