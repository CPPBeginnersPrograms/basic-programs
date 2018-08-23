#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	const int array = 12;
	int a[array];
	int total = 0;


	for( int i = 0; i < array; i++)
	{

		cout<<"Enter the "<<i<<"th elements"<<endl;
		cin>>a[i];


	//cout<<"The elements entered are: "<<a[i]<<endl;

			total += a[i];
	}
	cout << "The sum of the elements in the array is: "<<total<<endl;


	return 0;

}
