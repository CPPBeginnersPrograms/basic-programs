/*
 * gb.h
 *
 *  Created on: Jun 28, 2018
 *      Author: raswantkoushikpeesapati
 */

#ifndef GB_H_
#define GB_H_

#include<string>

using namespace std;
//creating class gradebook

class GradeBook
{
public:

	GradeBook (string name); // initializing constructor
	void setCourseName(string name);	//set member function (mutators)
	string getCourseName();				//get member function)(accessor)
	void displayMessage();				//member function prototypes
	void classAverage();
	//void studentResult();
	void inputGrades();
	void displayGradeReport();

private:
	string courseName; // private data member
	int acount;
	int bcount;
	int ccount;
	int dcount;
	int fcount;
}; // end of class GradeBook





#endif /* GB_H_ */
