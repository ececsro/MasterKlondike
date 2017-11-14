/*
 * IOInterface.h
 *
 *  Created on: 14 oct. 2017
 *      Author: ECECSRO
 */

#ifndef IOINTERFACE_H_
#define IOINTERFACE_H_
#include <string>
#include <iostream>
using namespace std;

class IOInterface {
public:
	IOInterface();
	virtual ~IOInterface();
	void putConsole(string);
	string getConsole();
};

#endif /* IOINTERFACE_H_ */
