#include<iostream>
#include<cstdlib>
#include"gb.h"
#include<iomanip>


using namespace std;

	GradeBook::GradeBook (string name)
	{
		setCourseName(name);// call set function to initializing coursename
		int acount = 0;
		int bcount = 0;
		int ccount = 0;
		int dcount = 0;
		int fcount = 0;
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
		int grade = 0;
		int GradeCounter = 0;
		double Average = 0;

		//srand(time(0));

//		while(GradeCounter <= 10)
//		{
			cout<<"Enter the Grade : ";
			//grade = (1 + rand()%100);  //printing random numbers to test the functionality
			//cout<<grade<<endl;			//to print the random numbers generated =.
			cin>>grade;

			while(grade!= -1)
			{
			total += grade;
			GradeCounter++;
			cout<<"Enter the Grade or -1 to exit: ";
			cin>>grade;
			}
//		}
			if(GradeCounter!=0)
			{
			Average = static_cast<double> (total)/GradeCounter; // using static is unary cast operator and this temporarily
																//holds the value of the fraction in total and this type of cast is called
																//Explicit Conversion.
																//using int and double values by deafult it is casted as
																//double this type of cast is called implicit conversion or promotion.
			cout<<"\n\nThe Total of all "<<GradeCounter<<" Grades entered for out of 1000 : "<<total;
			cout<<"\n\n The Average of the total is :"<<Average;
			}
			else
				cout<<"No Grades were Entered ";

	}
	void GradeBook::inputGrades()
	{
		int grade;

		cout<<"Enter the grade : \n"
				<<"Enter the EOF to exit."<<endl;

		while( (grade = cin.get() ) != EOF )
		{
			switch(grade)
			{
			case 'A' :
			case 'a' :
				acount++;
				break;

			case 'B':
			case 'b':
				bcount++;
				break;

			case 'C':
			case 'c':
				ccount++;
				break;

			case 'D':
			case 'd':
				dcount++;
				break;

			case 'F':
			case 'f':
				fcount++;
				break;

			case '\n':
			case '\t':
			case ' ':
				break;

			default:
				cout<<"Incorrect letter entered enter again. \n";
				break;
			}
		}
	}

	void GradeBook::displayGradeReport()
	{
		cout<<"The total no of students received each grades are : \n"
				<<"A : "<< acount
				<<"\nB : "<<bcount
				<<"\nC : "<< ccount
				<<"\nD : "<<dcount
				<<"\nF : "<<fcount<<endl;
	}
//	void GradeBook::studentResult()
//	{
//		int passed = 0, failed = 0;
//
////		int studentCounter = 0;
//
////		while(studentCounter < grade)
////		{
//		for(int i = 1; i <= GradeCounter; i++)
//		{
//			if(grade > 60)
//			{
//				passed += 1;
//			}
//			else
//			{
//				failed += 1 ;
//			}
//		}
////			studentCounter += 1;
////		}
//		cout<<"\n\nThe total Passed are "<<passed<<" and total failed are "<<failed<<endl;
//
//		if(passed > 8)
//			cout<<"Bonus to Instructor!."<<endl;
//	}
