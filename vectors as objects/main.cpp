#include<iostream>
#include<string>
#include<vector>
#include"student.h"

using namespace std;

void fillvector(vector<Student>&);
void printvector(const vector<Student>&);

int main()
{
	vector<Student> myClass;

	fillvector(myClass);
	printvector(myClass);

	return 0;
}

void fillvector(vector<Student>& newMyClass)
{
	int size;
	string name;
	char grade;
	cout<<"Enter the number of students : "<<endl;
	cin >> size;

	for(int i =0; i < size; i++)
	{
		cout<<"Enter Student name : ";
		cin>>name;
		cout<<"Enter student Grade : ";
		cin>>grade;


		Student newStudent(name, grade);
		newMyClass.push_back(newStudent);
		cout<<endl;
	}
	cout<<endl;
}

void printvector(const vector<Student>& newMyClass)
{
	unsigned int size = newMyClass.size();

	for(unsigned int i = 0; i < size; i++)
	{
		cout<<" Student name : "<<newMyClass.at(i).getName();
		cout<<endl;
		cout<<"Student Grade : "<<newMyClass.at(i).getGrade();
		cout<<endl;
	}
}
