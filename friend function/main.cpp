#include "friendfun.h"

#include<iostream>

using namespace std;


void printFun(FriendFun &obj)
{
	int newx = obj.X;
	cout<<newx;
}

int main()
{
	FriendFun obj2(99);
	printFun(obj2);

	return 0;
}
