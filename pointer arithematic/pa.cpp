#include<iostream>

using namespace std;


int main()
{

	int a[5] = {1,2,3,4,5},b[5] = {5,4,3,2,1}, *vptr,*vptr2,*v3ptr;

	vptr = a;
	vptr2 = b;
	v3ptr = &a[4];		//same array a

	int x = *vptr - *vptr2;
	int y = v3ptr - vptr;


	cout<<*vptr<<" "<<*vptr2;
	cout<<"\n"<<x<<"\n"<<y;
	return 0;

}
