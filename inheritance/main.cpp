#include<iostream>
#include"isosceles.h"

using namespace std;



int main()
{

	int base, height, side;

	cout<< " \n"<< " Enter the base : ";
	cin>>base;
	cout<<"\n"<<" Enter the height : ";
	cin>>height;
	cout<<"\n"<<" Enter the side : ";
	cin>>side;
	cout<<endl;

	Isosceles myTriangle(height, base, side);
	myTriangle.printinfo();

	return 0;
}
