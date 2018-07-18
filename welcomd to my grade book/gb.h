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
	void setCourseName(string name);	//set member function
	string getCourseName();				//get member function
	void displayMessage();				//member function prototypes
	void classAverage();
	void studentResult();
private:
	string courseName; // private data member

}; // end of class GradeBook





#endif /* GB_H_ */
