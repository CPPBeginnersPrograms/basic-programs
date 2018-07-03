// creating and displaying gradebook.
#include<iostream>
#include<string> // c++ stl for class string
#include"gb.h"
using namespace std;

//main function begins
int main()
{
	string nameOfCourse; // string variable
	GradeBook mygradebook("Enter the course name :\n"); // creating the object using class gradebook
	GradeBook gradebook1("welcome to C++ edition 7");
	GradeBook gradebook2("C++ classes and objects");
	cout<<"Initial course name is :\n"<<mygradebook.getCourseName();

	//prompt for input and set course name
//	cout<<"Enter the Course name : \n"<<endl;
	getline(cin, nameOfCourse); // to store in to the string with blank.
	mygradebook.setCourseName(nameOfCourse);//set the course name.
	cout<<endl;

	//display the message
	mygradebook.displayMessage(); // using object to display message.
	cout<<"created for gradebook 1 : "<<gradebook1.getCourseName();
	cout<<"\n created for gradebook 2 : "<<gradebook2.getCourseName();



	return 0;
}
