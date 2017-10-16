/*
 * Rules.cpp
 *
 *  Created on: 3 oct. 2017
 *      Author: ECECSRO
 */

#include "Rules.h"

Rules::Rules() {
	// TODO Auto-generated constructor stub

}

Rules::Rules(int TypeOfRules) {

	switch (TypeOfRules) {
	case STANDARD:
	    TypeOfRules=STANDARD;
	default:
		TypeOfRules=STANDARD;
	}
}

Rules::~Rules() {
	// TODO Auto-generated destructor stub
}

void Rules::setInitial() {

}
