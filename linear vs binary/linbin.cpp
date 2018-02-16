#include <iostream>

using namespace std;


void linearSear(int [], int , int);
void binarySear(int [], int ,int );
void populateNum(int [], int);


int main()
{
	int size;
	char input;
	int userValue;
	do
	{
		cout << "Enter the size of array : "<<endl;
		cin >> size;

		int a[size];

		cout << "Enter a element between 1 and "<<size<<endl;
		cin >> userValue;

		populateNum(a, size);
		linearSear(a , size, userValue);
		binarySear(a, size, userValue);

		cout<<"Enter 'y' if you want to run this again :"<<endl;
		cin >> input;
	//	cin.get(input);
		cin.sync();


	}while(input == 'y');

	return 0;

}

void linearSear(int array[], int size, int Uval)
{
	int count = 0;

	for(int i = 0; i < size; i++)
	{
		count++;
		if(Uval == array[i])
		{
			break;
		}
	}

	cout << "The Linear Search comparisons: " << count <<"\n"<<endl;
	cout << "The Linear Search cost is : " << count << "\n"<<endl;
}

void binarySear(int array[], int size, int Uval)
{
	int low = 0;
	int high = size - 1;
	int mid;
	int count = 0;
	int cost = 0;
	while(low <= high)
	{
		mid = (low + high)/2;

		count++;
		cost += 3;
		if(Uval == array[mid])
		{
			break;
		}
		else if(Uval > array[mid])
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}
	cout << "The Binary Search comparisons : " << count << "\n"<<endl;
	cout << "The Binary search cost is : " <<	 cost <<"\n"<<endl;
}

void populateNum(int array[], int size)
{
	for(int i = 1; i <= size; i++)
	{
		array[i-1] = i;
	}
}
