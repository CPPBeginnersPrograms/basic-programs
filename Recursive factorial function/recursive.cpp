#include "recursive.h"



unsigned long factorial ( unsigned long number)
{
	if(number <= 1) //base case
	{
		return 1;
	}
	else			//recursive case
		return number * factorial(number - 1);
}
