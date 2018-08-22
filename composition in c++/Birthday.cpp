/*
 * Birthday.cpp
 *
 *  Created on: Aug 19, 2018
 *      Author: raswantkoushikpeesapati
 */

#include "Birthday.h"

#include<iostream>

using namespace std;

Birthday::Birthday(int nMonth, int nDate, int nYear)
{
	month = nMonth;
	date = nDate;
	year = nYear;

}

void Birthday::printBirthDate()
{
	cout<<month<<"/"<<date<<"/"<<year;
}
