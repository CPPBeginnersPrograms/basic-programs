/*
 * ContactList.h
 *
 *  Created on: Aug 20, 2018
 *      Author: raswantkoushikpeesapati
 */

#ifndef CONTACTLIST_H_
#define CONTACTLIST_H_
//derived class
#include"contact.h"
#include<string>
#include<iostream>

using namespace std;

class ContactList {
public:

	ContactList();
	void addToHead(const string &); //add to head funtion
	void printlist();  //traversing a linked list
	void insert(const string &);
	void deleteNode(const string &);
	void enterName(ContactList *);
	void deleteName(ContactList *);
private:
	Contact *head;
	int size;

};

#endif /* CONTACTLIST_H_ */
