/*
 * OpeOvr.cpp
 *
 *  Created on: Aug 19, 2018
 *      Author: raswantkoushikpeesapati
 */

#include "OpeOvr.h"
#include<iostream>
using namespace std;

OpeOvr::OpeOvr()
{
	num = 0;
}

OpeOvr::OpeOvr(int x)
{
	num = x;
}

OpeOvr OpeOvr::operator +(OpeOvr y)
{
	OpeOvr newobj;
	newobj.num = num + y.num;
	return newobj;
}



