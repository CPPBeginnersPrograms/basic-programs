#include<iostream>

void printchar( const char *);			//non const pointer to const data printing

void x(const int *);			//non const pointer to const data trying to modify

int main()
{
	char string[] = "koushik's c++ costs $40.99";
	int y = 9;



	x(&y);

	std::cout<<"The string is: ";

	printchar(string);
	return 0;

}

void printchar(const char *sptr)
{
	for(;*sptr != '\0'; sptr++)
		std::cout<<*sptr;

}

void x(const int *y)
{
	*y = 100; //error: read-only variable is not assignable
	std::cout<<*y;
}
