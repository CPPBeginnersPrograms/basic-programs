#include<iostream>
#include<iomanip>

using namespace std;


int main()
{

	char string1[20], string2[] = "string literal";

	cout<<"Enter a string: "<<endl;

	cin>> string1;

	cout<<"The string1 is: "<<
			string1<<endl<<"The string 2 is: "<<string2<<endl;

	cout<<"The string with spaces between characetrs: \n";

	for(int i = 0; string1[i] != '\0'; i++)
		cout<<string1[i]<<' ';


	cin>>string1;		//reads the next string given in the keyboard
		cout<<"\n string1 is: "<<string1<<endl;
	return 0;



}
