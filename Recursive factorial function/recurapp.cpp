#include "recursive.h"

#include <iostream>
#include <iomanip>

using namespace std;


int main()
{
	int size = 0;

	cout << "Enter the number for the factorial: "<< endl;
	cin >> size;

	for(int i = 0; i <= size ; i++)
	{

		cout<< setw(2)<< i <<"! = " << factorial(i)<<endl;

	}
	return 0;
}
