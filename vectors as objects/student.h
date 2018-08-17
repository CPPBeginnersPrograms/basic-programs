/*
 * student.h
 *
 *  Created on: Aug 16, 2018
 *      Author: raswantkoushikpeesapati
 */

#ifndef STUDENT_H_
#define STUDENT_H_

#include<string>
#include<iostream>

using namespace std;

class Student
{
public:

	//default constructor
	Student();

	//overloaded constructor
	Student(string, char);

	//destructor

	~Student();

	//accessor function

	 const string getName() const;
	// to get student name

	 const char getGrade() const;
	//to get student grade

	//mutator function

	void setName(string);
	//to set student name

	void setGrade(char);
	//to set student grade

private:
	string sName;
	char sGrade;

};



#endif /* STUDENT_H_ */
