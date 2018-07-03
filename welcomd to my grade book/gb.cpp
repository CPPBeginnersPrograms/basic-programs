#include<iostream>
#include"gb.h"

using namespace std;

	GradeBook::GradeBook (string name)
	{
		setCourseName(name);// call set function to initializing coursename
	}
	void GradeBook::setCourseName(string name)//set member function
	{
		courseName = name; //store the course name in name
	}
	string GradeBook::getCourseName() //get member function
	{
		return courseName;
	}
	void GradeBook::displayMessage() // display function
	{
		cout<<"welcome to the course : "<<getCourseName()<<endl;
	}
