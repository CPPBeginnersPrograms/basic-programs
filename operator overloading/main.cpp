#include "OpeOvr.h"
#include<iostream>
using namespace std;


int main()
{
	OpeOvr a(34);
	OpeOvr b(23);
	OpeOvr c;

	c = a + b;

	cout<<c.num;

	return 0;
}
