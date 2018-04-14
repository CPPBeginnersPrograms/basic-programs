//
// we are looking for a program that manages disjoint intervals of integers e.g[[1,3],[4,6]] is
// a valid object gives two intervals. [[1,3],[3,6]] is not a valid object because it is not disjoint.
// [[1,6]] is the intended result.



#include<iostream>
#include<vector>
//#include<String>

void rem(int [],int, int);
void printarray(int[], int);
using namespace std;


int main()
{
	int usrinput;

	const int arraySize = 10;
	const int arraySize1 = 10;
	int setA[arraySize] = {1,2,3,6,10};
	int setB[arraySize1] = {4,5,7,8,9};

	cout<<"The elements are:\n";
	//printarray(setA,arraySize);

	for(int i =0; i < arraySize; i++)
	{
		for(int j =0; j < arraySize1; j++)
		{

		int temp = setA[i];

		if(setA[i] == temp)
		{
			setA[i] = setB[j];
		}
		cout<<setB[j];
		}


	}

//	cout<<"Enter the number\n";
//	cin>>usrinput;

	//rem(setA,arraySize,usrinput);




//			if(usrinput > arr[5])

	return 0 ;
}

void rem(int anyarray[],int arraySize, int userinput)
{

				cout<<"{";
				for(int j = 0; j < userinput; j++)
				{
					cout<<anyarray[j]<<",";
				}
				cout<<"}";

				cout<<"{";
				for(int k = userinput; k < arraySize; k++)
				{
					cout<<anyarray[k]<<",";
				}
				cout<<"}";
				}

void printarray(int anyarray[], int arraySize)
{
	for(int i = 0; i < arraySize; i++)
		anyarray[i] = 2*i;

	for(int j =0; j < arraySize; j++)
		cout<<anyarray[j]<<" ";
}
