#include"student.h"


Student::Student()
{
	sGrade = ' ';
}

Student::Student(string name, char grade)
{
	sName = name;
	sGrade = grade;
}
Student::~Student()
{

}
void Student::setName(string name)
{
	sName = name;

}
void Student::setGrade(char grade)
{
	sGrade = grade;
}

 const string Student::getName() const
{
	return sName;
}

const  char Student::getGrade() const
{
	return sGrade;
}
