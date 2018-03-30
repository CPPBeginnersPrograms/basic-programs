#include <iostream>

using namespace std;

int square (int x)
{
	return x * x;
}
double square(double x)		//overloaded function
{
	return x * x;
}
//int vol(int x)			//defining a function without default arguments
//{
//	cout<< x;	//and
//}
//int vol(int x = 1)		//defining a function with default arguments is a syntax error.
//{
//	return x*x;
//}
void nothing1(int a, float b, char c, int *d)		//name mangling
{


}

char *nothing2(char a, int b, float *c, double *d )		//name mangling
{
	return 0;
}

int main()
{
//cout<<square(3.5);
//
//cout<<endl<<square(3);

//	vol(2);
//	cout<<vol(2);			Error : function overload not possible, see func def for more.
return 0;

}
