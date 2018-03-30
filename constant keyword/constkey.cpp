#include<iostream>


using namespace std;

int main()
{
//correctly initializing and using the const keyword
	const int x = 7;		//initialized constant variable

	cout << "The value of the constant variable is: "<< x << endl;

	//a const object must be initialized
//	const int x;		//Error : x must be initialized
//		x = 7;		//Error : cannot modify a const variable

		//cout << x <<endl;
	return 0;
}
