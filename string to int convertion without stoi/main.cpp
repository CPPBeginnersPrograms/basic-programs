/*
 * main.cpp
 *
 *  Created on: Dec 14, 2018
 *      Author: raswantkoushikpeesapati
 */

#include <iostream>
#include <cmath>
using namespace std;

int tointeger(string str)
{
	int num = 0, size = str.size();

	for(int i = 0, j = size; i < size; i++)
	{
		num+= (str[--j] - '0')*pow(10,i); //this is conversion logic
	}
	return (num);
}
int main()
{
	string str;
	cout<<"Enter the string "<<endl;
	getline(cin,str);

	int num = tointeger(str);

	cout<< "The converted num is "<< num <<endl;

	return (0);

}


