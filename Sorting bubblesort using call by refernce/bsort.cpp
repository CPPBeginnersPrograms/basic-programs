#include<iostream>
#include<cstdlib>
#include<iomanip>

using namespace std;

void swap(int *, int *);
void bubblesortasc(int *,  const  int );
void bubblesortdsc(int *, const  int );
int main()
{

	srand(time(0));

	const int arraySize = 10;


	//cout<<"Enter the arraysize :\n";	//for manual entery

//	int arraySize;
//	cin>>arraySize;

	int bsort[arraySize];

		cout<<"The unsorted array list is :\n";

		for(int i =0 ; i< arraySize; i++)
		{

			bsort[i] = (1 + rand() % 99);

		cout<<setw(3)<<bsort[i] << " ";
		}

		cout<<"\n\nThe sorted array list in asc is :\n";
		bubblesortasc(bsort, arraySize);
		for(int j = 0; j < arraySize; j++)
			cout<<setw(3)<<bsort[j]<<" ";

		cout<<"\n\nThe sorted array list in dsc is :\n";
				bubblesortdsc(bsort, arraySize);
				for(int j = 0; j < arraySize; j++)
					cout<<setw(3)<<bsort[j]<<" ";
		return 0;
}

void bubblesortasc(int *anyarray, const int arraySize)
{


	for(int pass =0; pass < arraySize -1; pass++)
	{
		for(int i = 0; i < arraySize -1; i++)

			if(anyarray[i] > anyarray[i+1])

				swap( &anyarray[i],  &anyarray[i+1]);
	}
}

void bubblesortdsc(int *anyarray, const int arraySize)
{


	for(int pass =0; pass < arraySize - 1  ; pass++)
	{
		for(int i = 0; i < arraySize - 1  ; i++)

			if(anyarray[i] < anyarray[i+1])

				swap( &anyarray[i], &anyarray[i+1]);
	}
}

void swap(int * ele1, int *ele2)
{
	int hold = *ele1;
	*ele1 = *ele2;
	*ele2 = hold;

}

