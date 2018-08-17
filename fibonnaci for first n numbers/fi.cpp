#include<iostream>
#include<iomanip>
#include<math.h>

using namespace std;
int fibb(int );
int fibb1(int);
void fi(int n)
{
	for(int i = 0; i < n; i++)
	{


		cout<<" the fib for "<< i <<" is :"<<fibb1(i)<<endl;
	}
}

int fibb(int n)
{
	if(n <= 0 )
		return 0;
	else if(n == 1)
		return 1;

	return fibb(n-1) + fibb(n-2);
}

int fibb1(int n)
{
	if( n <= 0)
		return 0;

	int a =1, b =1;
	for(int i = 3; i <= n; i++)
	{
		int c = a +b;
		a = b;
		b = c;
	}
	return b;
}

int main()
{
	int limit;
	cout<<" enter the limit of the number : "<<endl;
	cin>>limit;

	fi(limit);
	return 0;
}
