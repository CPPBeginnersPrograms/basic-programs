/*
 * triangle.h
 *
 *  Created on: Aug 17, 2018
 *      Author: raswantkoushikpeesapati
 */

#ifndef TRIANGLE_H_
#define TRIANGLE_H_

// base class of triangle
#include<iostream>
#include<iomanip>
#include<math.h>

using namespace std;

class Triangle
{
public:
	//default constructor
	Triangle();

	//overloaded constructor
	Triangle(int);

	//destructor
	~Triangle();

	//mutators;

	void setheight(int);
	// to set height

	//accessor

	const int getHeight();
	// to return the height

	//getarea
	const double getArea(int);
	// @param int is base of a triangle.
	// to get the area of the triangle

private:

	//data members

	int height;

//protected:
//						//should be avoid most of the times,
						//it makes the data members public to all the classes that inherits from it.
//	int height;


};



#endif /* TRIANGLE_H_ */
