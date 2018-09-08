#include <iostream>
#include <array>
using namespace std;
//
//double average(int [], int);
//void userInput(int [], int);
//
//int main()
//{
//	int points[5];
//
//	userInput(points, 5);
//
//
//	cout<< "The average of the points are : "<< average(points, 5) << endl;
//
//
//	return 0;
//}
//double average(int array[], int size)
//{
//	double sum = 0.0;
//
//	for(int i = 0; i < size; i++)
//	{
//		sum += array[i];
//	}
//	return (sum/size);
//}
//
//void userInput(int array[], int size)
//{
//	for(int i = 0; i < size ;i++)
//	{
//		cout<<"enter points:"<< endl;
//		cin >>array[i];
//
//	}
//}
//
void fn( ){
char c;
c =getc(stdin);
if (c != ‘\n’) {
fn( );
putc(c,stdout);
}
}
