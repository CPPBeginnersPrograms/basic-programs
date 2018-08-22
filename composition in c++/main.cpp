#include "People.h"
#include "Birthday.h"
#include<string>
#include<iostream>

using namespace std;

int main()
{
	Birthday obj(07,23,1992);
	People pobj(" Koushik the great", obj);

	pobj.printInfo();

	return 0;

}
