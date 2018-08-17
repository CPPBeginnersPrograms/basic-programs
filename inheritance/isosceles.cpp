#include<iostream>
#include"isosceles.h"

using namespace std;

//default constructor

Isosceles::Isosceles()
{
	side = 0;
	base = 0;
}

//overloaded constructor

Isosceles::Isosceles(int newHeight, int newBase, int newSide) : Triangle(newHeight)
{
	base = newBase;
	side = newSide;
	//height = newHeight // if protected is accessed no need to inherit the base class
}

//destructor

Isosceles::~Isosceles()
{
	cout<<"\nThank you for trying ";
}

//mutators

void Isosceles::setBase(int newBase)
{
	base = newBase;
}

void Isosceles::setSide(int newSide)
{
	side = newSide;
}

//accessors

const int Isosceles::getBase()
{
	return base;
}

const int Isosceles::getSide()
{
	return side;
}

const int Isosceles::getPerimeter()
{
	return ((2 * side) + base);
}

const void Isosceles::printinfo()
{
	cout<<"\n"<<" The perimeter of a triangle is : "<<getPerimeter();
	cout<<endl;
	cout<<"\n"<<" The area of a triangle is : "<<getArea(base);
}
