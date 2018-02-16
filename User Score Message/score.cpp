//Write a program that asks the user for
//a score between 0 and 100. Based on the inputted score and the table
//below,the program will output the appropraite message.
//90-100 Awesome!
//80-89 Well Done
//70-79 Average
//60-69 Bummer
//0-59 Sad Times

//it is constructed with if statements.

#include <iostream>
#include <string>

using namespace std;

int main()
{

	int score = 0;

	cout << "Enter an score between 0 -100."<< endl;

	cin >> score;

	if(score < 0 || score > 100)
	{
		cout << "Invalid Option. Program Terminated!"<< endl;

		return 0;
	}

	if(score >= 90 && score <= 100)
	{
		cout << "Awesome!"<< endl;
	}

	else if(score >= 80 && score <= 89)
	{
		cout << "Well Done."<< endl;
	}

	else if(score >= 70 && score <= 79)
	{
		cout << "Average"<< endl;
	}

	else if(score >= 60 && score <= 69)
	{
		cout << "Bummer!"<< endl;
	}

	else
	{
		cout << "Sad Times!"<< endl;
	}

	return 0;
}
