#include <iostream>

using namespace std;

template <class T>						//using func template to use all data types
T maxim(T value1, T value2, T value3)
{
	T max = value1;

	if(value2 > max)
	{
		max = value2;
	}
	if (value3 > max)
	{
		max = value3;
	}
	return max;
}

int main()
{
int int1, int2, int3;

cout << " Enter three integer values to find the max int: "<<endl;
cin>> int1 >> int2 >> int3;
cout << "the max value of the integer is : "<<maxim(int1,int2,int3)<<endl;

double d1,d2,d3;
cout << " Enter three double integer values to find the max int: "<<endl;
cin>> d1 >> d2 >> d3;
cout << "the max value of the integer is : "<<maxim(d1,d2,d3)<<endl;

char c1,c2,c3;
cout << " Enter three charecters to find the max char: "<<endl;
cin>> c1 >> c2 >> c3;
cout << "the max value of the integer is : "<<maxim(c1,c2,c3)<<endl;

return 0;
}
