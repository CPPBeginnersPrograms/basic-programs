#include<iostream>
#include<string>
#include<iomanip>
#include"add.h"
using namespace std;


int main()
{
	long num1,num2; //variables
	cout<<"enter the nums\n";
	cin>>num1>>num2;
	Addition add1(num1, num2); // object of a class
	Subtraction sub1(num1,num2);
	cout<<"The add value is : "<<add1.getAddVal(); //calling member function of a class
	cout<<"\nThe sub value is : "<<sub1.getSubVal();
	return 0;
}
