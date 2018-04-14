#include<iostream>

void cubebyvalue(int element);			//function
void cubebyreference(int *element);			//call by reference with pointer argument
float cubebyvalue(float );			//overloaded function
int main()
{
	int 	number = 2;
//	int *number = &numb;

	float num = 2.5;

	std::cout<<"before calling cube by value\n";

	std::cout<<"The number is: "<<number<<std::endl;

	std::cout<<"after calling CBV\n";
	cubebyvalue(number);

	std::cout<<"The number is: "<<number<<std::endl;

	std::cout<<"\n\nbefore calling int returning cube by value\n";

	std::cout<<"The number is: "<<num<<std::endl;

	std::cout<<"after calling int CBV\n";


	std::cout<<"The number is: "<<cubebyvalue(num)<<std::endl;

	std::cout<<"\n\nBefore calling cube by reference \n";
	std::cout<<"The number is: "<<number<<std::endl;
	std::cout<<"after calling CBR \n";
	cubebyreference(&number);
	std::cout<<"The number is: "<<number<<std::endl;

	std::cout<<"\n\n assigning the CBV value to variable num\n";
	num = cubebyvalue(num);
	std::cout<<"The number is: "<<num<<std::endl;

	return 0;
}


void cubebyvalue(int element)			//call by value function
{
	std::cout<<"printing from function : ";
	std::cout<< element*element*element<<"\n";
}

float cubebyvalue(float num)			//call by value with overloaded function
{
	return num*num*num;
}

void cubebyreference(int *element)			//call by reference with pointer argument
{
	*element = *element * *element * *element;
}
