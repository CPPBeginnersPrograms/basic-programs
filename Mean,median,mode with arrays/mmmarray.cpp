#include "mmmarray.h"
#include<iostream>
#include<iomanip>
#include<cstdlib>

using namespace std;

void populateRandArray(int arrayName[], int arraySize)
{
	srand(time(0));

	for(int i = 0; i < arraySize; i++)
		arrayName[i] = (1 + rand() % 9);


}
void printArray(int arrayName[], int arraySize)
{

	for(int i = 0; i < arraySize; i++)
	{


		if(i % 20 == 0)
			cout<<endl;

		cout<<setw(2)<<arrayName[i];
	}

}

void bubbleSort(int arrayName[], int arraySize)
{
	for(int pass = 0; pass < arraySize - 1; pass++)
		for(int i = 0; i < arraySize - 1; i++)
			if(arrayName[i] > arrayName[i+1])
			{
				int temp = arrayName[i];
				arrayName[i] = arrayName[i+1];
				arrayName[i+1] = temp;
			}
}
void mean(int arrayName[], int arraySize)
{
	double total = 0;

	cout<< "\n\n\n******\n MEAN \n******\n\n\n"<<endl;

	for(int i = 0; i < arraySize; i++)
		total += arrayName[i];

	cout<<"The Mean for the given Poll is: "<<total
			<<" / "<<arraySize
			<<setiosflags(ios::fixed | ios:: showpoint)
			<<setprecision(4)<<setw(6)<<" is: "<< total/arraySize<<endl;

}

void median(int arrayName[], int arraySize)
{
	cout<< "\n\n\n******\n MEDIAN \n******\n\n\n"<<endl;
	cout<< "The unsorted list of Response Poll is: \n";
	printArray(arrayName,arraySize);
	bubbleSort(arrayName,arraySize);
	cout<<"\n\n\nThe sorted  list of Response is  is :\n";
	printArray(arrayName,arraySize);

	cout<<"\n\nThe Median of the Response list is: \n"<<arraySize/2
			<<"in the list of "<<arraySize<<" elements "
			<<"The Median element is: "<<arrayName[arraySize/2]<<"\n\n\n"<<endl;
}

void mode(int freq[],int freqSize, int arrayName[],  int arraySize)
{
	int rating, largest = 0;
	int modevalue = 0;

	cout<< "******\n MODE \n******"<<endl;

//	for( rating = 1; rating < freqSize ; rating++)
//		freq[rating] = 0;								//generating numbers for this array

	for(int i = 0; i < arraySize; i++)					// array counter
		++freq[arrayName[i]];

	cout << " Response "<<setw(13)<<" Frequency "<<setw(19)<< " Histogram "<<endl;

	for(rating = 1; rating < freqSize ; rating++)
	{

		cout << setw(7) << rating << setw(7) << freq[rating] << setw(7)<<"         " ;

		if(freq[rating] > largest)			//for setting the highest repeating number
				{
					largest = freq[rating];
					modevalue = rating;
				}

		for(int j = 0 ; j < freq[rating]; j++)
			cout<< " *";

		cout<<"\n";
	}

	cout<<"The Mode is the most frequent value \n"
			<<"for this run the mode is "
			<< modevalue <<" which occurred "<<largest<<" times. \n";
}
