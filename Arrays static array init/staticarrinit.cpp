#include<iostream>

using namespace std;

void staticArrayInit(void);
void automaticArrayInit(void);

int main()
{
	cout<< "Calling the Function for the first time "<<endl;

	staticArrayInit();
	automaticArrayInit();

	cout<<"Calling the function for the second time: "<<endl;

	staticArrayInit();
	automaticArrayInit();

	return 0;


}

void staticArrayInit()
{
	static int arrayA[3];	//if we donot initialize static will initialize the array to 0
							//by the complier.

	cout<<"Values of static array on entering: "<<endl;

	for(int i = 0; i < 3; i++ )
		cout<<"the Values of static array[ "<< i << "] = " << arrayA[i]<<endl;

	cout<< "Values of static Array on exiting: "<<endl;

	for(int i =0; i < 3; i++)
		cout<<"the Values of static array[ "<< i << "] = " << (arrayA[i] += 5)<<endl;


}

void automaticArrayInit()
{

	//const int arraysize = 3;
	int arrayB[3] = {1,2,3} ;// if you dont initialize or take keyboard input the complier
							//will initialize the garbage values.


	cout<<"Values of auto array on entering: "<<endl;

	for(int i = 0; i < 3; i++ )

//		cout<<"Enter 3 array elements:"<<endl;//to take input from the keyboard.
//		cin >> arrayB[i];
		cout<<"the Values of auto array[ "<< i << "] = " << arrayB[i]<<endl;

	cout<< "Values of auto Array on exiting: "<<endl;

	for(int i = 0; i < 3; i++)
		cout<<"the Values of auto array[ "<< i << "] = " << (arrayB[i] += 5)<<endl;


}
