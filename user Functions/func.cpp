//Write a function that will do the following :
//Get a positive integer value from the user and return that value.
//Calculate the are of a circle based on a radius.
//Calculate the volume of a sphere based on a radius.


#include <iostream>
#include "MyMathFunc.h"

using namespace std;




int main()

{
	int radius = getPositive("Enter the positive integer for the radius of a circle/Sphere");

	double aCir = areaCircle(radius);

	double vSphere = volSphere(radius);

	cout << "The area of a circle that has radius of "<<
			radius << " is " << aCir << "." << endl;

	cout << "The area of a Sphere that has radius of "<<
				radius << " is " << vSphere << "." << endl;

	return 0;

}

