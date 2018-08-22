#include<iostream>
#include<string>
#include"tem.h"
using namespace std;


template<class T>
Spec<T>::Spec(T var)
{
		cout<<var<<" is not a character "<<endl;
}

Spec<char>::Spec(char var)
{
		cout<<var<< " is a character. "<<endl;
}

Spec<string>::Spec(string var)
{
		cout<<var << "is a string. "<<endl;
}



