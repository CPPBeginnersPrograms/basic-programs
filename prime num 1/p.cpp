#include<iostream>

using namespace std;

bool prim(int num);


int main()
{
	int num;
	bool f;
	cout<<"enter the num\n";
	cin>>num;
	f = prim(num);

	if(f == true)
	{
		cout<<num<<" is not prime"<<endl;
	}
	else
		cout<<num<<" is prime"<<endl;

	return 0;
}

bool prim(int num)
{

	bool flip;
	for(int i = 1; i <= num; i++)
	{
		if( num % 2 == 0)
		{
			flip = true;
		}
		else
			flip = false;
	}
	return flip;
}
