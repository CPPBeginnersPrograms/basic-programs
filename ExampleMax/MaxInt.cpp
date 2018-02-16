#include <iostream>
#include<string>
using namespace std;
int MaxInt(int ,int , int); //function prototype

int main()
{
	int a,b,c;
	string input;

	do
		{
	cout << "Enter three integers\n"<< endl;
	cin >> a >> b >> c;


		cout<< "the maximum of number is : "<< MaxInt(a, b,c) << endl;

		cout << "\nEnter 'y' if you want to enter the integers again. "<< endl;
		cin >> input;

		}while(input == "y");

	return 0;
}

//int MaxInt(int x, int y, int z) //function definition
//{
//	int max = x;
//
//	if(y > max and y > z)
//
//	return y;
//
//	if(z > max and z > y)
//
//	return z;
//
//	return max;
//}
int MaxInt(int x, int y, int z) //function definition
{
	int max = x;

	if(y > max )

	max = y;

	if(z > max )

	max = z;

	return max;
}
