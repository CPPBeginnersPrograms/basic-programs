/*
 * contact.h
 *
 *  Created on: Aug 20, 2018
 *      Author: raswantkoushikpeesapati
 */

#ifndef CONTACT_H_
#define CONTACT_H_


#include<iostream>
#include<string>

using namespace std;

class Contact {
public:
	Contact(string );

private:
	string name;
	Contact *next;

friend ostream& operator<<(ostream &, const Contact & );
friend class ContactList;




};

#endif /* CONTACT_H_ */
