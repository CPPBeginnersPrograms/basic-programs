#include<iostream>

using namespace std;

void printn(int *);

int main()
{
	int *p1;		//creating a pointer.
	p1 = new int;	// allocating the pointer var to new int var which is heap.
	*p1 = 45;// storing the number in heap memory.

	printn(p1);	//printing out the pointer.

	delete p1;		//deleting the var val from heap memory.
	p1 = NULL;		//and seting the var to null.

	return 0;
}

void printn(int *num)
{
	cout<< " pointer is : "<<*num;
}
