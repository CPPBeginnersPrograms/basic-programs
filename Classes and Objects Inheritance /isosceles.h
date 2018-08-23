/*
 * isosceles.h
 *
 *  Created on: Aug 17, 2018
 *      Author: raswantkoushikpeesapati
 */

#ifndef ISOSCELES_H_
#define ISOSCELES_H_

//derived class of triangle
#include"triangle.h"

class Isosceles : public Triangle
{
public:
	//default constructor
	Isosceles();

	//overloaded constructor
	Isosceles(int ,int ,int);

	//destructor
	~Isosceles();

	//mutators
	void setBase(int);
	//to set base

	void setSide(int);
	//to set side

	//accessor

	const int getBase();
	//to return the base

	const int getSide();
	//to return the side

	const int getPerimeter();
	// to return the perimeter of the triangle

	const void printinfo();
	//to print the information

private:

	//data members
	int base;

	int side;

};



#endif /* ISOSCELES_H_ */
