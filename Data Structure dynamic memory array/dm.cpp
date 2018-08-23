#include<iostream>

using namespace std;


const int cap = 1000;
int main()
{
	int *darray;
	darray = new int[cap];

	darray[0] = 4;
	darray[1] = 2;
	darray[2] = 9;
	darray[3] = 3;
	darray[4] = 6;
	darray[5] = 7;



	cout<<"array :";
	for(int i =0; i < 6; i++)
		cout<<darray[i]<< " ";


	delete [] darray;

	darray = NULL;

	return 0;
}
