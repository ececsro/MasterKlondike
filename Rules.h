/*
 * Rules.h
 *
 *  Created on: 3 oct. 2017
 *      Author: ECECSRO
 */

#ifndef RULES_H_
#define RULES_H_

class Rules {

	int TypeOfRules;
	const int STANDARD=1;

public:
	Rules();
	Rules(int);
	virtual ~Rules();
	void setInitial();
};

#endif /* RULES_H_ */
