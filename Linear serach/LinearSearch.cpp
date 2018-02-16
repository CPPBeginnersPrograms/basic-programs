//#include <iostream>
//#include <array>
//using namespace std;
//
//void userInput(int**, int*);
//int linearSearch(int*, int, int);
//
//
//int main()
//{
////#define MAX_SIZE 10;
//	int** array = 0;
//	int size;
//	userInput( array, &size);
//
//
//
//	int userValue;
//
//	cout << "Enter an integer: "<< endl;
//	cin >> userValue;
//	cout <<"userval"<<userValue<<endl;//logmsg
//
////	int result = linearSearch(*array, size, userValue);
////	{
////
////		if(result >= 0)
////		{
////			cout << "The number "<< array[result] << "is found on the " << result << "th index."<< endl;
////		}
////		else
////		{
////			cout << "The number " << userValue << "is not found "<<endl;
////		}
////	}
//
//	return 0;
//
//}
//
//void userInput(int** array, int* size)
//{
//
//	int arr_len = 0;
//	cout<<"enter the size of array"<<endl;
//	cin>>arr_len;
//
//	int *local_array = (int*)malloc(sizeof(int) * arr_len);
//	cout<<"arr_len=" << arr_len << endl;//log msg
////	*array = local_array;
//	*size = arr_len;
//	cout<< "size=" << *size<<endl;//logmsg
//	for(int i = 0; i < arr_len; i++)
//	{
//		cout << "Enter the values of the array: "<< endl;
//		cin >> *(local_array + i);
//
//	}
//
//	for(int i=0; i < arr_len; i++)
//					{
//						cout << "The array list is : " << local_array[i] << endl;
//					}
//
//}
//
//int linearSearch(int* array, int size, int searchValue)
//{
//
//	for(int i = 0; i < size; i++)
//	{
//		if (searchValue == *(array + i))
//		{
//			return i;
//		}
//
//	}
//
//	return -1;
//}
//
//
//
