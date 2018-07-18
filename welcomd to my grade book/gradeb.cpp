// creating and displaying gradebook.
#include<iostream>
#include<string> // c++ stl for class string
#include"gb.h"
using namespace std;

//main function begins
int main()
{
	string nameOfCourse; // string variable
	GradeBook mygradebook(nameOfCourse); // creating the object using class gradebook
	GradeBook gradebook1("welcome to C++ programming language edition 7");
	GradeBook gradebook2("C++ classes and objects");
	cout<<"Initial course name grade book 1 is :\n"<<gradebook1.getCourseName();
	cout<<"\n\nInitial course name grade book 2 is :\n"<<gradebook2.getCourseName();
	//prompt for input and set course name
	cout<<"\n\nEnter the Course name : \n"<<endl;
	getline(cin, nameOfCourse); // to store in to the string with blank.
	mygradebook.setCourseName(nameOfCourse);//set the course name.
	cout<<endl;
	//display the message
	mygradebook.displayMessage(); // using object to display message.
	mygradebook.classAverage();
	mygradebook.studentResult();
	gradebook1.setCourseName("C++ edition 7");

	cout<<"\n\n recreated name for grade book 1 : "<<gradebook1.getCourseName();
	cout<<"\n created for grade book 2 : "<<gradebook2.getCourseName();



	return 0;
}
