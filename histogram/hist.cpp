#include<iostream>
#include<iomanip>

using namespace std;


int main()

{

	const int arraySize = 10;
	int a[arraySize];

	for(int i = 0; i < arraySize; i++)
	{
		cout<<"Enter the "<< i << " th values"<<endl;
		cin >>a[i];
	}

	cout << "Elements"<<setw(13)<< "Values"<<setw(13)<<"Histogram"<<endl;

	for(int i = 0; i < arraySize ; i++)
	{
		cout<<setw(7)<< i << setw(13)<< a[i] << setw(9);

		for(int j = 0; j < a[i]; j++) // printing the histogram one time.
									//we can use the same for counter in nested
									//but it will be a logic error.
			cout<<'*';
		cout<<endl;
	}

	return 0;

}
