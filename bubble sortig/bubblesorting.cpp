#include<iostream>
#include<iomanip>


using namespace std;

void ascending(int a[], int aSize);
void descending(int d[], int dSize);

int main()
{
	const int arraySize = 10;
	int select,Bsort[arraySize] ;
	char input;

	for(int i =0; i < arraySize; i++)
	{
		cout<< "Enter the array to sort: \n";
		cin>>Bsort[i];}

		cout<< "The entered elemnets are: \n";
		for(int i = 0; i < arraySize; i++)
		cout<<setw(9)<<Bsort[i]<<' ';

		cout<<endl;

	do
	{
	cout<<"do you want to sort in ascending or descending?: \n"
			<<"Press 1. for ascending \n"
			<<"Press 2. for descending \n";
	cin>>select;

	if(select == 1)
	{
	ascending(Bsort, arraySize);

//		for(int pass = 0; pass < arraySize - 1; pass++ )	//passes
//					for(int i = 0; i < arraySize -1 ; i++)	//one pass
//						if(Bsort[i] > Bsort[i + 1])			//one comparison
//						{
//							int hold = Bsort[i];				//one swap
//							Bsort[i] = Bsort[i+1];
//							Bsort[i+1] = hold;
//						}
	cout<<"The sorted elements in ascending order are: \n";
	for(int i = 0; i < arraySize; i++)
	cout<<setw(9)<<Bsort[i]<<' ';
	cout<<endl;
	}

	else
	{
	descending(Bsort,arraySize);

	cout<<"The sorted elements in descending order are: \n";
		for(int i = 0; i < arraySize; i++)
		cout<<setw(9)<<Bsort[i]<<' ';
		cout<<endl;
	}
	cout<<"Hit the wrong Option? \n"
			<<"Press 'R' to see the options again: \n";
	cin>>input;
	}while(input == 'r' || input == 'R');

	return 0;
}

void ascending(int a[], int aSize)
{
	for(int pass = 0; pass < aSize - 1; pass++ )	//passes
			for(int i = 0; i < aSize -1 ; i++) //one pass
				if(a[i] > a[i + 1])			//one comparison
				{
					int hold = a[i];				//one swap
					a[i] = a[i+1];
					a[i+1] = hold;
				}
}

void descending(int d[], int dSize)
{
	for(int pass = 0; pass < dSize - 1; pass++ )	//passes
				for(int i = 0; i < dSize -1 ; i++)	//one pass
					if(d[i] < d[i + 1])			//one comparison
					{
						int hold = d[i];				//one swap
						d[i] = d[i+1];
						d[i+1] = hold;
					}
}
