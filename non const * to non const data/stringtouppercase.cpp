#include<iostream>
#include<ctype.h>

using namespace std;


void charToUpper(char *);

int main()
{

	char string[] = "koushik's c++ course costs $40.99";

	cout<<"The string before conversion : "<<string;
	charToUpper(string);
	cout<<"\n The string after conversion : "
			<<string;

	return 0;
}

void charToUpper(char *sptr)
{
	while(*sptr != '\0')
	{
		if(*sptr >= 'a' && *sptr <= 'z')

			*sptr = toupper(*sptr);

		++sptr;
	}
}
