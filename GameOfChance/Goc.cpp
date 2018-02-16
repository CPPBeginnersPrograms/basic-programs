#include "Goc.h"
#include <cstdlib>
#include<iostream>

using namespace std;

int rolldice(void) // function definition
{
	int dice1, dice2, dsum;

	dice1 = 1 + rand() % 6;
	dice2 = 1 + rand() % 6;
	dsum = dice1 + dice2;

	cout << "You Rolled "<<dice1<< " & " <<dice2<< "\nThe sum of both the Dice: "<<dsum<<"\n"<<endl;

	return dsum;
}
