#include<iostream>

using namespace std;


void bsort(int[] , int);



int main()
{
	int arraySize = 10;
	int barray[arraySize];

	cout<<"enter:\n";
	for(int i = 0; i < arraySize; i++)
	{

	cin>>barray[i];
	}

	bsort(barray, arraySize);
	cout<<"the sorted : \n";

	for(int i =0; i< arraySize; i++)
		cout<<barray[i];
	return 0;

}

void bsort(int *aName, int arraySize )
{
	for(int pass = 0; pass < arraySize - 1; pass++)
	{	for(int i = 0; i < arraySize -1; i++)
	{
		if(aName[i] > aName[i+1])
		{
			int hold = aName[i];
			aName[i] = aName[i+1];
			aName[i+1] = hold;
		}
	}
	}
}
