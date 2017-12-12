/*
 * IOInterface.cpp
 *
 *  Created on: 14 oct. 2017
 *      Author: ECECSRO
 */

#include "IOInterface.h"
using namespace std;

IOInterface* IOInterface::instance = nullptr;

IOInterface::IOInterface() {
	// TODO Auto-generated constructor stub
}

IOInterface::~IOInterface() {
	
}

void IOInterface::putConsole(string OutputMessage) {
	cout << OutputMessage << endl;
}

string IOInterface::getConsole() {
	string InputMessage;
//	cout << "IOInterface getConsole" << endl;
	cin >> InputMessage;
//	cout << "IOInterface getConsole result " << InputMessage << endl;
	return(InputMessage);
}

IOInterface* IOInterface::getInstance() {
	if (instance == nullptr) {
		instance = new IOInterface;
	}
	return instance;
}
