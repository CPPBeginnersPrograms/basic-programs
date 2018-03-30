#include<iostream>
#include<iomanip>

using namespace std;

void modifyArray( int [], int);		//strange appearance
			// can alos be written void modifyArray(int anyArrayName[], int anyArraysize)

void modifyElement(int);

int main()
{
	const int arraySize = 5;
	 int arrays[arraySize] = {0,1,2,3,4};

	cout<< "Effects of passing entire array call--by--reference:"
		<<"\n the values of the original array is: \n";

	for(int i = 0; i < arraySize; i++)
		cout<<setw(3)<<arrays[i];
		cout << endl;

	//array passed by call by reference
	modifyArray(arrays, 5);

	cout<<"The modified array list is: \n ";

	for(int j = 0; j< arraySize; j++)
		cout<<setw(3)<<arrays[j];
	cout<<endl;

	cout<< "\n\n\n"
			<<"Effects of passing array element call--by--value \n"
			<<"The value of a[3] is: "<< arrays[3]<<endl;
	// array element passed by call by value
	modifyElement(arrays[3]);
	cout<< "The value of a[3] is: "<<arrays[3];

	return 0;


}

void modifyArray( int a[], int arraySize)
{

	for(int i = 0; i < arraySize; i++)
		a[i]*=2;
}

void modifyElement(int e)
{
	cout<<"The modified Element is: "<<(e *= 2)<<endl;

}
