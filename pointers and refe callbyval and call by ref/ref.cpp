#include <iostream>
using namespace std;

int squarebyval(int );		//func prototype call by val
void squarebyref(int &);		// func prototype call by ref

int main()
{
	int x = 2, z = 4;

	cout <<"The value of x before Square by val is: "<< x <<endl
	<<"The value of x returned by Square by val is: "<<squarebyval(x)<<endl
	<< "The val of x after Square by val : " << x <<endl;

	cout <<endl<<"The val of z before square by ref is : " << z <<endl;
	squarebyref(z);
	cout << "The val of z after square b y ref is : "<< z << endl;


	return 0;

}

int squarebyval(int y)
{
	return y*y;	// caller's argument not modified
}
void squarebyref(int &y)
{
	y *= y;		//callers argument modified
}
