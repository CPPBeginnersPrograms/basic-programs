#include <iostream>
#include <array>

using namespace std;

void userInput(int [], int );
int linSrc(int [], int ,int );
void populateNum(int [], int);
void repeat(int[], int);
int main()
{
	int size;
	char input;

	cout << "Enter the array size:"<< endl;
	cin >> size;

	int array[size];

	userInput(array , size);

	int userValue;

	do
	{
		repeat(array, size);

		cout << "Enter the number to find its index: "<< endl;

		cin >> userValue;

		int result = linSrc(array , size , userValue);
		{


			if(result >= 0)
			{
				cout<<"The number "<< array[result] << " is found on "<< result << "th index."<< endl;
			}
			else
			{
				cout<< "The number " << userValue << " is not found."<< endl;
			}
		}

		cout << "enter 'y' if you want to find an other number : "<< endl;

		cin >> input;

		cin.sync();

	}while(input == 'y');


	return 0;
}

void userInput(int array[], int size)
{
//	cout << "Enter the array size:"<< endl;
//	cin >> size; //not a great idea to be here.

	cout << "Enter "<<size<<" elements into array:\n\n" << endl;

	for(int i = 0; i < size; i++)
	{

		cout << "Enter elements :" <<endl;
		cin >> array[i];
	}

}

int linSrc(int array[], int size, int Uval)
{
	for(int i = 0; i < size; i++)
	{
		if(Uval == array[i])
		{
			return i;
		}
	}
	return -1;
}

void populateNum(int array[], int size)
{
	for (int i = 1; i <= size; i++)
	{
		array[i -1] = i;
	}
}

void repeat(int array[], int size)
{
	for(int i = 0 ; i < size; i++)
	{
		cout << "The elements entered are: "<< array[i]<<endl;
	}
}
