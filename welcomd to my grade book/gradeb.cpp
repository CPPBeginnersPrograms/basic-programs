// creating and displaying gradebook.
#include<iostream>
#include<string> // c++ stl for class string
using namespace std;

//creating class gradebook

class GradeBook
{
public:
	// member function that sets course name
	void setCourseName(string name)
	{
		courseName = name; //store the course name in the object
	} //end of function

	//member function that gets course name
	string getCourseName()
	{
		return courseName; // return the object's course name
	}//end of function

//	void displayMessage(string coursename /*parameter*/) // function in a class for displaying the message(also called member function)
//		{
//		cout<<"Welcome to my Grade Book : "<< coursename<<endl;
//
//		} // end of function

	void displayMessage()
	{
		// this member function gets course name for which the gradebook represents
		cout<<"Welcome to the Gradebook "<<getCourseName()<<"!";
		cout<<endl;
	} // end of function

private:

	string courseName; // private data member
}; // end of class GradeBook


//main function begins
int main()
{
	string nameOfCourse; // string variable
	GradeBook mygradebook; // creating the object using class gradebook

	cout<<"Initial course name is :\n"<<mygradebook.getCourseName();

	//prompt for input and set course name
	cout<<"Enter the Course name : \n"<<endl;
	getline(cin, nameOfCourse); // to store in to the string with blank.
	mygradebook.setCourseName(nameOfCourse);//set the course name.
	cout<<endl;

	//display the message
	mygradebook.displayMessage(); // using object to display message.



	return 0;
}
