#include <iostream>
#include <array>
using namespace std;

void userInput(int [], int);
int binarySearch(int [], int, int);
void populatedNum(int[], int);
void displayElements(int [], int);


int main()
{
	int size;
	char input;

	cout << "Enter the size of an array:"<< endl;
	cin >> size;

	int a[size] ;

	//populatedNum(a, size);

	userInput(a , size);

	int userValue;

	do
	{
		displayElements(a, size);

		cout << "Enter an integer: "<< endl;
		cin >> userValue;

		int result = binarySearch(a, size, userValue);
		{
			if(result >= 0)
			{
				cout << "The number "<< a[result] << "is found on the " << result << "th index."<< endl;
			}
			else
			{
				cout << "The number " << userValue << "is not found "<<endl;
			}
		}

		cout << "Enter 'y' if you want another number index: "<<endl;
		cin >> input;
		cin.sync();

	}while(input == 'y');

	return 0;

}

void userInput(int array[], int size)
{

	cout << "Enter "<<size << "  elements in sorted order in the array.\n\n"<<endl;

	for(int i = 0; i < size; i++)
	{
		cout << "Enter the elements in sorted order in the array : " << endl;
		cin >> array[i];

	}

}

int binarySearch(int array[], int size, int searchValue)
{
	int low = 0;
	int high = size - 1;

	int mid;
	while(low <= high)
	{
		mid = (low + high)/2;

		if(searchValue == array[mid])
		{
			return mid;
		}
		else if(searchValue > array[mid])
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}

	return -1;
}
void populatedNum(int array[], int size)
{
	for (int i = 1 ; i <= size ; i++)
	{
		array[i - 1] = i;
	}
}

void displayElements(int array[], int size)
{
	for(int i =0; i < size; i++)
	{
		cout << "The elementes enterd are :"<< array[i]<<endl;
	}
}
