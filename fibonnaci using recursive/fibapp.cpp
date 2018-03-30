#include "fib.h"
#include <iostream>
using namespace std;
int main()
{
	int number, result;

	cout << "enter the integer: "<<endl;
	cin >> number;

	result = fib(number);
	cout << "Fibonacci ("<<number<<") is : "<< result;

	return 0;

}
