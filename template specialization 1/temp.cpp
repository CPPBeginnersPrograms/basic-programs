#include<iostream>
#include<string>

using namespace std;


template<class T>

class Spec
{
public:
	Spec(T var)
	{
		cout<<var<< " is not a character. "<<endl;
	}
};

template< >

class Spec<char>
{
public:
	Spec(char var)
{
		cout<<var << " is a character. "<<endl;
}
};

template< >

class Spec<string>
{
public:
	Spec(string var)
{
		cout<<var <<" is a string. "<<endl;
}
};


int main()
{
	Spec<int>obj1(7);
	Spec<double>obj2(7.123);
	Spec<char>obj3('m');
	Spec<string>obj4("hello wats up ");

	return 0;

}
