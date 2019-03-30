/*
 * main.cpp
 *
 *  Created on: Mar 29, 2019
 *      Author: raswantkoushikpeesapati
 */

#include <iostream>
#include <cmath>

using namespace std;

int heightoftriangle(int area, int base)
{
	float height = ceil((float)(2 * area) / base);

	return (height);
}
int heightofTriangle(int area, int base)
{
	float height = floor((float)(2 * area)/ base);

	return (height);
}
int main()
{
	cout<< "ceil: "<<heightoftriangle(100 ,17)<<endl;
	cout<< "floor: "<<heightofTriangle(100,17)<<endl;
	return(0);
}


