/*
 * clas.h
 *
 *  Created on: Aug 17, 2018
 *      Author: raswantkoushikpeesapati
 */

#ifndef CLAS_H_
#define CLAS_H_

#include<iostream>

template<class T, class U>

class Maxim
{
public:

	//constructor
	Maxim(T, U);

	//member function
	T bigger();

private:
	T num1;
	U num2;

};






#endif /* CLAS_H_ */
