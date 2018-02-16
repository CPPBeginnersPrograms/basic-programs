#include <iostream>
#include <string>
#include <cmath>
#include "MyMathFunc.h"

using namespace std;




int getPositive(string msg)
{
	int num = 0;

	do
	{
	cout << msg << endl;

	cin >> num;
	}while(num <= 0);

	return num;

}

double areaCircle(int r)

{
	return PI * pow((double)r, 2);

}

double volSphere(int r)

{
	return 4/3.0 * PI * pow((double)r, 3);
}
