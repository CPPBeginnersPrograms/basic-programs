#include<iostream>

int main()
{

	int x = 5,y;		//x is 5 here and canot be changed because the data is const and *ptr is const.

	const int *const ptr = &x; //warning: note: variable 'ptr' declared const here.
						//an int can be modified with ptr, but ptr always
						//point to the same memory locations and the integer at location cannot be modified.
	std::cout<<ptr<<"\n"<<*ptr;
	*ptr = 7;	// error: read-only variable is not assignable
	ptr = &y;//error: cannot assign to variable 'ptr' with const-qualified type 'int *const'

	return 0;

}
