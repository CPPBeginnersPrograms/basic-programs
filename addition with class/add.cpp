#include<iostream>
#include"add.h"

using namespace std;


Addition::Addition(long int value1, long int value2)
{
	setAddVal(value1, value2);
}

void Addition::setAddVal(long int value1, long int value2)
{
	val = value1 + value2;
}

long Addition::getAddVal()
{
	return val;
}

Subtraction::Subtraction(long int value1, long int value2)
{
	setSubVal(value1,value2);
}
void Subtraction::setSubVal(long int value1, long int value2)
{
	if(value1 > value2)
		val = value1 - value2;
	else
		val = value2 - value1;
}
long Subtraction::getSubVal()
{
	return val;
}
