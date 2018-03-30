#include <iostream>

using namespace std;


int main()
{
	int x = 10; //z = 200;
	int &y = x;//,&o = z; // using reference as alias

	cout << "The x val is : " << x << endl
			<< "The y Val is : "<< y <<endl;

	y = 20;

	cout << "\nThe x val after y is : "<< x <<endl
			<< "The y val after y is : "<< y << endl;

	return 0;
}

//int main()
//{
//	int x =3, &y; // ERROR: y must be initialized.
//
//	cout << "The x val is : " << x << endl
//				<< "The y Val is : "<< y <<endl;
//
//		y = 20;
//
//		cout << "\nThe x val after y is : "<< x <<endl
//				<< "The y val after y is : "<< y << endl;
//
//		return 0;
//}// compilation error
