#include "fib.h"

unsigned long fib(unsigned long number)
{
	unsigned long n = number;
	if (n == 0 || n == 1)	//base case
	{
		return n;
	}
	else
		return fib(n-1) + fib(n - 2);	//recursive case
}
