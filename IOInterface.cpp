/*
 * IOInterface.cpp
 *
 *  Created on: 14 oct. 2017
 *      Author: ECECSRO
 */

#include "IOInterface.h"
#include <iostream>
#include <string>
using namespace std;

IOInterface::IOInterface() {
	// TODO Auto-generated constructor stub
}

IOInterface::~IOInterface() {
	// TODO Auto-generated destructor stub
}

void IOInterface::putConsole(string OutputMessage) {
	cout << OutputMessage << endl;
}

string IOInterface::getConsole() {
	string InputMessage;
	cin >> InputMessage;
	return(InputMessage);
}
