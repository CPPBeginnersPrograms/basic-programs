/*
 * tem.h
 *
 *  Created on: Aug 18, 2018
 *      Author: raswantkoushikpeesapati
 */

#ifndef TEM_H_
#define TEM_H_

#include<iostream>
#include<string>

using namespace std;
template<class T>
class Spec
{
public:
	Spec(T var);
};

template< >

class Spec<char>
{
public:
	Spec(char var);
};
//
template< >

class Spec<string>
{
public:
	Spec(string var);
};




#endif /* TEM_H_ */
