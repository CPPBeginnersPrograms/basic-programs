#include<iostream>
#include<iomanip>

using namespace std;
const int row = 3 , col = 4;			//global variables

void printArray( int anyArray[][col]);


int main()
{
	//manual entery
//	int array1[3][4] = {{1,2,3,4},{4,5,6,7},{2,3,4,5}},		//full set
//		array2[3][4] = {{1,2}},								//partial sets
//		array3[3][4] = {{1,2},{2},{4}};						//partial sets
//
//cout << " Values in array1: \n";
//printArray(array1);
//
//cout << " Values in array2: \n";
//printArray(array2);
//
//cout << " Values in array3: \n";
//printArray(array3);

// user entery
int rowArray[row][col];

cout<<"Enter the elements: \n";

for(int i = 0 ;i < row;i++)
	for(int j =0;j< col; j++)
		cin>>rowArray[i][j];
cout<<endl;
printArray(rowArray);
return 0;
}

void printArray(int anyArray[][col])
{
	int total = 0;
	for(int i = 0; i < row; i++){
		for(int j = 0; j < col; j++){
			cout<<setw(3)<<anyArray[i][j]<< " ";
				total += anyArray[i][j];}
	cout<<endl;}

	cout<<"The total of the array is : \n"<<total<<"\n";




}


