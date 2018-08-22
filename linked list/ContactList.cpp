/*
 * ContactList.cpp
 *
 *  Created on: Aug 20, 2018
 *      Author: raswantkoushikpeesapati
 */

#include "ContactList.h"

using namespace std;

ContactList::ContactList() : head(NULL), size(0)
{

}

void ContactList::addToHead(const string &name)
{
	Contact *newOne = new Contact(name);
	if(head == 0)
	{
		head = newOne;
	}
	else
	{
		newOne->next = head;
		head = newOne;
	}
	size++;
}

void ContactList::printlist()
{
	Contact *tp = head;

	while(tp != 0)
	{
		cout<< *tp<<endl;
		tp = tp->next;
	}
	cout<<"Contacts : "<< size<<endl;
}
void ContactList::insert(const string &name)
{
	Contact *newNode = new Contact(name);

	//case 1 : empty list

	if(head == 0)
	{
		head = newNode;
	}

	else
	{
		Contact *curr = head;
		Contact *trail = 0;

		//traverse list to find insert location

		while(curr != 0)
		{
			if(curr->name >= newNode->name)
			{
				break;
			}
			else
			{
				trail = curr;
				curr = curr->next;
			}
		}


		//case 2 : insert at head
		if(curr == head)
		{
			newNode->next = head;
			head = newNode;
		}
		else
		{
		//case 3: insert after head
			newNode->next = curr;
			trail->next = newNode;

		}
	}
	size++;
}

void ContactList::deleteNode(const string &name)
{
	//case 1 : empty list

	if(head == 0)
	{
		cout<<" Cannot delete from an empty list. "<< endl;
	}
	else
	{
		Contact *curr = head;
		Contact *trail = 0;

		//traverse list to find insert location

		while(curr != 0)
		{
			if(curr->name == name)
			{
				break;
			}
			else
			{
				trail = curr;
				curr = curr->next;
			}
		}

		//case 2 : node with "name" not found

		if(curr == 0)
		{
			cout<<"Contact with name : "<<name<<" not found."<<endl;
		}
		else
		{
			//case 3 : delete from the head

			if(head == curr)
			{
				head = head->next;
			}
			else
			{
				//case 4 : delete beyond the head
				trail->next = curr->next;
			}

			delete curr;
		}
	}

	size--;
}

void ContactList::enterName(ContactList *cl)
{
	string name;
	while(true)
	{
		cout<<"Enter name of the contact or press q to exit : "<<endl;
		cin>>name;
		if(name == "q")
			break;
		cl->insert(name);

	}
	cl->printlist();
}

void ContactList::deleteName(ContactList *cl)
{
	string name;
	while(true)
	{
		cout<<"Enter name of the contact to delete or press q to exit : "<<endl;
		cin>>name;
		if(name == "q")
			break;
		cl->deleteNode(name);
		cl->printlist();
	}

}
