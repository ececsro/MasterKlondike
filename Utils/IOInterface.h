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
	static IOInterface* instance;
protected:
	IOInterface();
public:
	virtual ~IOInterface();
	void putConsole(string);
	string getConsole();
	static IOInterface* getInstance();
};

#endif /* IOINTERFACE_H_ */
