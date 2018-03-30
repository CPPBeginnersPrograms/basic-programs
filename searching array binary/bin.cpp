#include<iostream>
#include<iomanip>
using namespace std;

int binSearch(int anyArray[], int searchKey, int arraySize);

void printHeader(int arraySize);

void printRow(int array[], int low, int mid, int high, int arraySize);


int main()

{
	int arraySize = 20;
	int binArray[arraySize], searchKey, element;

	for(int n = 0; n <arraySize; n++)
		binArray[n] = 2 * n;

	cout<< "Enter the Number between 0 to 40 : \n";
	cin>>searchKey;

	printHeader(arraySize);

	element = binSearch(binArray, searchKey, arraySize);

	if(element != -1)

		cout<<searchKey<<" found in element: "<<element<<endl;

	else

		cout<<searchKey<<" not found. "<<endl;

	return 0;


}


int binSearch(int anyArray[], int searchKey, int arraySize)
{
	int low = 0, high = arraySize - 1;



	while( low <= high)
	{
		int mid = (low + high) / 2;

		printRow(anyArray, low, mid, high, arraySize);

		if(searchKey == anyArray[mid])				//match
			return mid;
		else if( searchKey < anyArray[mid] )				//search low array
			high = mid - 1;
		else
			low = mid + 1;								//search high array
	}

	return -1;
}

void printHeader(int arraySize)
{
	cout << "\n Subscripts : \n";

	for(int i = 0; i < arraySize; i++)
		cout<<setw(4)<< i;

	cout<<"\n";

	for(int i = 1; i < 4 * arraySize; i++)
		cout<<'-';

	cout<<endl;

}

void printRow(int array[], int low, int mid, int high, int arraySize)
{
	for(int i = 0; i <arraySize; i++)

		if(i < low || i > high)
			cout <<"    " ;

		else if( i == mid)
			cout<<setw(3)<< array[i]<<"*";
		else
			cout<<setw(3) << array[i]<<" ";

	cout<<endl;

}

