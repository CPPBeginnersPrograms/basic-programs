//2. Search for nxn square patterns in a MxN rectangle. The rectangle is a byte-map.
//
//For example, find the number of 2x2 squares of 1 in a 8x8 byte-map
//
//What to find:
//1 1
//1 1
//
//Example byte-map:
//
//0 0 0 0 0 0 0 0
//0 0 0 0 1 0 0 0
//0 1 1 0 0 0 0 0
//0 1 1 0 0 1 1 0
//0 0 0 0 0 1 1 0
//1 0 0 0 0 0 0 0
//0 0 1 1 0 0 0 0
//0 0 1 1 0 0 0 1

#include<iostream>
#include<iomanip>

using namespace std;
int main()
{
	int k ;
	int count = 0;

	 int matrx[8][8] =  {{0,0,0,0,0,0,0,0},
					     {0,0,0,0,1,0,0,0},
					     {0,1,1,0,0,0,0,0},
	                     {0,1,1,0,0,1,1,0},
	                     {0,0,0,0,0,1,1,0},
	                     {1,0,0,0,0,0,0,0},
	                     {0,0,1,1,0,0,0,0},
	                     {0,0,1,1,0,0,0,0}};
	 cout<<"enter\n";
	 cin>> k;
	for(int i = 0; i < 8; i++)
	{
		for(int j = 0; j < 8; j++)
		{
			if(  matrx[i][j] == k && matrx[i][j+1] == k && matrx[i+1][j] == k && matrx[i+1][j+1] == k )
			{
				count++;

			}
		}
	}
	cout<<"\n total of 2x2 array of 1's are : "<<count;

	//system("PAUSE");// can be used only on windows
	return 0;

}
