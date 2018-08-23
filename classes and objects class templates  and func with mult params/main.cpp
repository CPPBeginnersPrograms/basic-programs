#include<iostream>
#include"clas.h"

using namespace std;



int main()
{
	Maxim<int,double> big(109,108.98);
	 int ne = big.bigger();
	 cout<<ne;
	return 0;

}
