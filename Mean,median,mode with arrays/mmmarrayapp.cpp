#include "mmmarray.h"
#include<iostream>



using namespace std;

int main()
{

	const int responseSize = 99, frequencySize = 10;
		int frequency[frequencySize] = {0};
		int response[responseSize];
//					 = {1,2,3,2,1,2,3,2,1,2,3,9,8,9,8,7,8,9,8,7,8,
//				9,8,7,8,9,8,7,8,9,5,4,5,6,7,8,7,6,5,4,3,4,5,6,7,
//				8,7,6,5,4,3,2,1,2,3,4,5,6,7,8,9,3,4,5,6,7,5,4,3,2,5,6,7,5,4,2,5,7,6,4,
//				2,3,5,4,3,4,5,4,3,2,6,7,8,1,1,1,4,7,6};

//	srand(time(0));
//
//	//cout<< "Enter the rating from 0 - 10: \n";
//	for(int i = 0; i < responseSize; i++)
//		cin>>response[i];					//for keyboard entery;

//	for(int i = 0 ; i < responseSize; i++)
//		response[i] = (1 + rand() % 9);						//populating random array

	populateRandArray(response,responseSize);

	cout<<"The Populated list is: \n";

	printArray(response,responseSize);

	mean(response, responseSize);
	median(response, responseSize);
	mode(frequency,frequencySize,response, responseSize);

	return 0;
}
