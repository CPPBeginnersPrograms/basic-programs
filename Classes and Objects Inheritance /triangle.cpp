#include<iostream>
#include"triangle.h"

using namespace std;


//default constructor

Triangle::Triangle()
{
	height = 0;
}

//overloaded constructor
Triangle::Triangle(int newHeight)
{
	height = newHeight;
}

// destructor

Triangle::~Triangle()
{
	cout<<"\n object is gone ";
}

//mutators

void Triangle::setheight(int newHeight)
{
	height = newHeight;
}

//accessor

const int Triangle::getHeight()
{
	return height;
}

//getarea
const double Triangle::getArea(int base)
{
	return (0.5 * base * height);
}

