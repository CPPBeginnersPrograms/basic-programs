/*
 * Foo.cpp
 *
 *  Created on: Aug 19, 2018
 *      Author: raswantkoushikpeesapati
 */

#include "Foo.h"
#include<iostream>
using namespace std;


Foo::Foo(int x)
{
	X = x;
}

void Foo::printInfo()
{
	cout<<"X = "<<X<<endl;
	cout<<"this->X = "<<this->X<<endl;
	cout<<"(*this).X = "<<(*this).X<<endl;
}
