//Write a program that will ask the user to input a word that is atleast
//5 characters in lenghth. Once a valid word has been inpiut, aks the
//user to input a char. The program will thn calculate thr number of
//times this inputted char appears in the word and output the result.

#include <iostream>
#include <string>

using namespace std;

int main()

{

	//Ask the user to input a word while the word length is less than 5.

	string word = "";

	do
	{
		cout << "Enter a word that has atleast 5 Characters:" << endl;
		cin >> word;
	}while(word.size() < 5);



	//Ask the user to input a character

	char searchCh = '0';

	cout << "Enter a charecter and the program will tell" <<
			" you how many time it appears in the word " << word << "." << endl;

	cin >> searchCh;

	int counter = 0;

	//Iterate over the word
	for(int i = 0; i < (int)word.size(); i++)
	{
		//Get a Char
		char ch = word.at(i);

		//If the char matches the char we're looking for
		if(searchCh == ch)
		{
			//Increment a counter
			counter++; //counter = counter + 1;
		}
	}
	//output the number of times the character was found in the word.

	cout << "The number of " << searchCh << "'s in the word " << word << " is " << counter << "." << endl;
}
