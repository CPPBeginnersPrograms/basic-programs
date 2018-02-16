#include <iostream>

using namespace std;


int main()
{

	int grade; //grade

	int acount = 0; //grades counts
	int bcount = 0;
	int ccount = 0;
	int dcount = 0;
	int fcount = 0;
	cout << "Enter the grades.\n"
			<<"Enter the EOF charecter to end input."<<endl;

	while( (grade = cin.get() ) != EOF )
	{
		switch(grade)
		{
		case 'A':
			//break;
		case 'a':
			//cout << "Enter 'A' to  grade."<< endl;
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
		case ' ' :
			break;

		default: //blocks all the other characters

			cout << "Enter the valid input\n"
			<<"Enter again"<<endl;

			break;

		}
	}

	cout << "Total Grades are: \n"<<endl;
	cout << "\nA : " << acount
		 << "\nB : " << bcount
		 << "\nC : " << ccount
		 << "\nD : " << dcount
		 << "\nF : " << fcount<< endl;

	return 0;
}
