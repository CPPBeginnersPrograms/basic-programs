#include<iostream>

#include<iomanip>


using namespace std;

int linSearch(int anyArray[], int searchKey, int arraySize);


int main()
{

	int arraySize = 100;
	int linArray[arraySize], searchKey, element;
	char input;
	for(int r = 0; r < arraySize; r++)			//creates a data set
		linArray[r] = r * 2;
	do
	{
	cout<<" Enter the integer key : \n";
	cin>> searchKey;

	element = linSearch(linArray, searchKey, arraySize);

		if(element != -1)

			cout<<"Found Value in Element : "<< element<<endl;

		else
			cout<<"Element not found "<<endl;
	cout<<"Do you want to search another Key ?\n"
			<<"Press 'Y' to continue or \n"
			<<"Press any other key to Quit: "<<endl;
	cin>>input;
	}while(input == 'y' || input == 'Y');
		return 0;
}


int linSearch(int anyArray[], int searchKey, int arraySize)
{
	for(int i = 0; i < arraySize; i++)

		if(anyArray[i] == searchKey)

			return i;

	return -1;
}
