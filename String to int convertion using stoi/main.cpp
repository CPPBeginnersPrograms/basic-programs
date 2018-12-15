/*
 * main.cpp
 *
 *  Created on: Dec 14, 2018
 *      Author: raswantkoushikpeesapati
 */

#include <iostream>

using namespace std;

int main()
{
	string str;

	cout<<"Enter the string ";

	cin >> str;

	int num  = 0;

	num = stoi(str);

	cout <<"the converted num is "   <<  num<<endl;

	return (0);
}


