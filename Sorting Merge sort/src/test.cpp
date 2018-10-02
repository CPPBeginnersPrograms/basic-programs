/*
 * test.cpp
 *
 *  Created on: Sep 24, 2018
 *      Author: raswantkoushikpeesapati
 */




#include "Merge.h"

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	unsigned int str = 0;
	unsigned int n = 0;
	unsigned int a[n];
	srand(time(0));

	cout<<"Enter the array size : "<<endl;
	cin >> n;


	for(int i = 0; i < n; i++)
	{
		a[i] = (1 + rand() % 50);
	}

	cout << "the array before merge sort : "<<endl;

	for(int i = 0; i < n ; i ++)
	{
		cout << a[i] << " ";
	}
	cout<<endl;


	Merge sort;
	sort.mergeSort(a,str,n);
	cout<<"The array after Merge sort is : "<<endl;
	for(int i = 0 ; i < n ; i++)
	{
		cout<<a[i]<<" ";
	}

	cout<<endl;
	return (0);

}

