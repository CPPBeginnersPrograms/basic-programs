#include<iostream>
#include<string>
#include"ContactList.h"

using namespace std;

int main(){

	ContactList *cl1 = new ContactList();
	string name;
	cl1->enterName(cl1);

	cl1->deleteName(cl1);


	return 0;
}
