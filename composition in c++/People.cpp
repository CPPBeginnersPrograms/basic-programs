/*
 * People.cpp
 *
 *  Created on: Aug 19, 2018
 *      Author: raswantkoushikpeesapati
 */

#include "People.h"
#include "Birthday.h"
#include<string>
#include<iostream>

using namespace std;

People::People(string nName, Birthday bo):name(nName),birthobj(bo){ //composition using objs of other class in this class

}

void People::printInfo()
{
	cout<<name<<" was born on ";
	birthobj.printBirthDate();
}

