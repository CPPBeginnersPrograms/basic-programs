#include<iostream>
#include<iomanip>

using namespace std;

int main()
{

	const int responseSize = 40, frequencySize= 11;	//declaring const variables
	int response[responseSize],frequency[frequencySize]; //declaring the arrays

	for(int answer = 1; answer <= responseSize; answer++) // loop to ask students and
	{
	cout<< "Student "<<answer<<" enter the value"<<endl;
	cin>>response[answer];
	++frequency[response[answer]];//its just a counter that increments according to the value.
	}



	cout << "Rating" << setw(13)<< " Frequency"<<setw(13)<<" Histogram "<<endl; // output setting

	for(int rating = 0; rating < frequencySize; rating++) // loop for to check hiow many frequency
	{	cout<<setw(5)<< rating << setw(13) << frequency[rating]<<setw(13)<< "        "; //output
		for(int i = 0; i< frequency[rating]; i++)
			cout<<"*";
		cout<<"\n";
	}

	return 0;
}
