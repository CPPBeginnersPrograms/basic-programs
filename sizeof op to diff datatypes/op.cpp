#include<iostream>
#include<iomanip>
#include<string>
using namespace std;


int main()
{

	int i;
	char c;
	string S;
	float f;
	double d;
	short s;
	long double ld;
	int array[20], *ptr = array;


	cout<<"The size of i is : "<< sizeof(i)
			<<" the size of int is : "<<sizeof(int)
			<<"\nThe size of c is : "<< sizeof c
			<<" the size of char is : "<<sizeof (char)
			<<"\nThe size of S is : "<< sizeof(S)
			<<" the size of string is : "<<sizeof(string)
			<<"\nThe size of f is : "<< sizeof(f)
			<<" the size of float is : "<<sizeof(float)
			<<"\nThe size of d is : "<< sizeof(d)
			<<" the size of double is : "<<sizeof(double)
			<<"\nThe size of s is : "<< sizeof(s)
			<<" the size of short is : "<<sizeof(short)
			<<"\nThe size of ld is : "<< sizeof(ld)
			<<" the size of long double is : "<<sizeof(long double)
			<<"\nThe size of array is : "<< sizeof(array)
			<<" the size of int array is : "<<sizeof(*ptr);

	return 0;
}
