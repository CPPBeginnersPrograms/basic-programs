/*
 * contact.cpp
 *
 *  Created on: Aug 20, 2018
 *      Author: raswantkoushikpeesapati
 */
//base class
#include "contact.h"

Contact::Contact(string n) : name(n), next(NULL)
{
}

ostream& operator<<(ostream &os, const Contact &c)
{
	return os << "Name : "<< c.name;
}
