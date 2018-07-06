#include<iostream>
#include<cstdlib>
#include"gb.h"

using namespace std;

	GradeBook::GradeBook (string name)
	{
		setCourseName(name);// call set function to initializing coursename
	}
	void GradeBook::setCourseName(string name)//set member function
	{
		if(name.length() < 25)
		{
		courseName = name; //store the course name in name
		}
		else
		{
			courseName = name.substr(0,25);

			cout<<"Name ' "<< name << " ' exceeded the maximum length of (25)\n"
					"Limiting course name to the first 25 characters.\n\n"<<endl;
		}

	}
	string GradeBook::getCourseName() //get member function
	{
		return courseName;
	}
	void GradeBook::displayMessage() // display function
	{
		cout<<"welcome to the course : "<<getCourseName()<<endl<<endl;
	}

	void GradeBook::classAverage()
	{
		int total = 0;
		int GradeCounter = 1;
		int Average;
		int grade = 0;
		srand(time(0));

		while(GradeCounter <= 10)
		{
			cout<<"Enter the Grade : ";
			grade = (1 + rand()%100);
			cout<<grade<<endl;
			total += grade;
			GradeCounter++;
		}
			Average = total/10;
			cout<<"\n\nThe Total Grades out of 1000 : "<<total;
			cout<<"\n\n The Average of the total is :"<<Average;

	}
