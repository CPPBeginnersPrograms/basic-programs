#include <iostream>

using namespace std;

int val; //global //below is the code of how the global var works

int main()
{
	//int val = 0;

	val = 1;

	cout<<val<<endl;

	val = 2;

	cout<<val<<endl;

	val = 3;

	cout<<val<<endl;
	cout<<endl;

	val = 4;
	val = 5;
	val = 6;

	cout << val <<endl;

	return 0;

}
