/*
 * People.h
 *
 *  Created on: Aug 19, 2018
 *      Author: raswantkoushikpeesapati
 */

#ifndef PEOPLE_H_
#define PEOPLE_H_
#include "Birthday.h"
#include<string>

using namespace std;
class People {
public:
	People(string nName, Birthday bo);//composition using objs of other class in this class
	void printInfo();
private:
	string name;
	Birthday birthobj;
};

#endif /* PEOPLE_H_ */
