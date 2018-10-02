/*
 * Merge.cpp
 *
 *  Created on: Sep 24, 2018
 *      Author: raswantkoushikpeesapati
 */

#include "Merge.h"

Merge::Merge()
{

}

void Merge::mergeHalve(unsigned int *a, int start, int end)
{
	int mid = (start + end) / 2;

	int i = start;
	int j = mid + 1;
	int k = start;
	int temp[100];

	while(i <= mid && j <= end)
	{
		if(a[i] < a[j])
		{
			temp[k] = a[i];
			k++;
			i++;
		}
		else
		{
			temp[k] = a[j];
			k++;
			j++;
		}
	}
	while(i <= mid)
	{
		temp[k] = a[i];
		k++;
		i++;
	}

	while(j <= end)
	{
		temp[k] = a[j];
		k++;
		j++;
	}

	for(int tem = 0; tem < end; tem++)
	{
		a[tem] = temp[tem];
	}

}

void Merge::mergeSort(unsigned int a[], int start, int end)
{

	//if elements are 1 or 0 return them.
	if(start >= end)
	{
		return;
	}

	//divide the array into half

	int mid = (start + end) / 2;

	//recursive function to divide the arrays
	mergeSort(a, start, mid);
	mergeSort(a, mid+1, end);

	//mergeHalve

	mergeHalve(a, start, end);

}
