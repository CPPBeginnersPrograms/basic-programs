/*
 * Merge.h
 *
 *  Created on: Sep 24, 2018
 *      Author: raswantkoushikpeesapati
 */

#ifndef SRC_MERGE_H_
#define SRC_MERGE_H_

#include<iostream>
using namespace std;

class Merge {
public:
	Merge();
	void mergeSort(unsigned int a[], int start, int end);
	void mergeHalve(unsigned int *a, int start, int end);
};

#endif /* SRC_MERGE_H_ */
