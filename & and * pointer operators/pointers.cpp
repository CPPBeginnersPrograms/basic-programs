#include<iostream>



int main()

{

	int a = 9 ;		//variable a is an integer
	int *aptr;		//pointer variable integer


	aptr = &a;			//pointing to 'a' variable to set address of a


	std::cout<<"The address of a is : "<<&a<<std::endl;
	std::cout<<"The address of aptr is : "<<aptr<<std::endl;

	std::cout<<"The value of a is : "<<a<<std::endl;
	std::cout<<"The value of aptr is : "<<*aptr<<std::endl;

	std::cout<<"The & and * inverses of each other is : "
			<<"&*aptr : "<<&*aptr<<"\n*&aptr : "<<*&aptr<<std::endl;

	return 0;

}
