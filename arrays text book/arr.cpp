#include<iostream>
#include<iomanip>

using namespace std;

int arrmain();
int arr1main(void);
//initailizing the array with zero values;

int main()
{
	cout<<"Initailizing the elements of an array with zero values"<<endl;
	int i, n[10];

	for(i = 0; i < 10; i++)
		n[i] = 0;

	cout<<"Elements"<<setw(13)<<"Values"<<endl;

	for(i=0; i < 10; i++)

		cout<<setw(7)<<i<<setw(13)<<n[i]<<endl;
	cout<<endl;
	cout<<"Initializing the elements of an array with a declaration"<<endl;
	arrmain();
	cout<<endl;
	cout<<"Generating the values to be palced into elements of an array."<<endl;
	arr1main();
	return 0;
}

// initializing the elements with a declaratrion
int arrmain()
{

	int  i,n[10] = {35,40,2,49,34,95,49,85,23,56};


	cout<<"Elements"<<setw(13)<<"Values"<<endl;

	for(i=0; i < 10; i++)

		cout<<setw(7)<<i<<setw(13)<<n[i]<<endl;
	return 0;
}

//Generating the values to be palced into elements of an array.
//initilazing the array to even integers from 2 to 20;

int arr1main()
{
	const int arraySize = 10;// see program constant keyword for more details about const
								//keyword.

	int j, s[arraySize];

	for(j = 0; j < arraySize; j++)
		s[j] = 2+2 * j;

	cout<< "Elements" << setw(13)<<"Values"<<endl;

	for(j = 0 ; j < arraySize; j++)

		cout<<setw(6)<< j << setw(13)<< s[j]<<endl;

	return 0;
}

