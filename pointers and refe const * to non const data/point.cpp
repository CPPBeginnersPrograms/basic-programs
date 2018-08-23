#include<iostream>

int main()
{

	int x ,y;

	 int *const ptr = &x; //warning: note: variable 'ptr' declared const here.
						//an int can be modified with ptr, but ptr always
						//point to the same memory locations
	std::cout<<ptr<<"\n"<<*ptr;
	*ptr = 7;
	ptr = &y;//error: cannot assign to variable 'ptr' with const-qualified type 'int *const'

	return 0;

}
