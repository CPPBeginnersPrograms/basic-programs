#include<iostream>
#include<iomanip>
#include<cstdlib>
using namespace std;


//global variables
const int students = 4;						//number of students
const int subjects = 5;						//number of subjects


//func prototypes
int minimum(int [][subjects], int, int);
int maximum(int [][subjects], int ,int);
double average(int [], int);
void printArray(int[][subjects],int, int);


int main()
{
	int studentArr[students][subjects];
	srand(time(0));

	for(int i = 0; i < students; i++)
	{
		//cout<<"Student ["<<i<<"] Enter your marks: \n";
		for(int j = 0; j < subjects; j++)
			//cin>>studentArr[i][j]; 					//for user entry
			studentArr[i][j] = (1 + rand() % 99);
	}
	cout<<"\n";
	printArray(studentArr, students, subjects);

	cout<<setw(5)<<"\n\nThe lowest Grade : "<< minimum(studentArr, students, subjects)<<endl;
	cout<<setw(5)<<"\nThe Highest Grade : "<<maximum(studentArr, students, subjects)<<endl;

	for(int person = 0; person < students; person++)
		cout<<"\nThe average grade for student "<<person<<" is : "
		<<setprecision(2)
		<<average(studentArr[person], subjects)<<endl;

	return 0;

}

//for finding the minimum grade
int minimum(int anyArray[][subjects], int pupils, int exams)
{
	int highestsubjects = 100;
	for(int i =0; i< pupils; i++)
		for(int j =0; j < exams; j++)
			if(anyArray[i][j] < highestsubjects)
				highestsubjects = anyArray[i][j];

	return highestsubjects;

}


//for finding the maximum grade
int maximum(int anyArray[][subjects], int pupils, int exams)
{
	int lowestsubjects = 0;
	for(int i =0; i< pupils; i++)
		for(int j =0; j < exams; j++)
			if(anyArray[i][j] > lowestsubjects)
				lowestsubjects = anyArray[i][j];

	return lowestsubjects;

}

//for finding the average
double average(int anyArray[], int exams)
{
	double total = 0;

	for(int j =0; j < exams; j++)
		total += anyArray[j];



	return total/exams;

}


//for printing the array
void printArray(int anyArray[][subjects], int pupils, int exams)
{

	cout<<"                 [0]  [1]  [2]  [3]  [4]";


	for(int i = 0; i <pupils; i++)
	{
		cout<<"\n\nStudentGrades["<<i<<"] ";

		for(int j = 0; j < exams; j++)
			cout<<setiosflags(ios::left)<<setw(5)
				<<anyArray[i][j];
	}
}
