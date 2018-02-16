#include <iostream>
#include "Vpet.h"

using namespace std;

int main()
{

	Vpet bob(150, false);
	bob.feedPet(25);

	Vpet rob;
//	Vpet rob(200, false);
	rob.feedPet(100);

	cout << "Bob weighs: " << bob.getWeight() << endl;
	cout << "Rob weighs: "<< rob.getWeight() << endl;

//	if(bob.getHungry())
//	{
//		cout << "Bob is Hungry." << endl;
//
//	}
//	else
//	{
//		cout << "Bob is not Hungry." << endl;
//	}
//
//	if(rob.getHungry())
//	{
//		cout << "Rob is Hungry." << endl;
//	}
//	else
//	{
//		cout << "Rob is not Hungry. " << endl;
//	}

	cout << bob << endl;
	cout << rob << endl;
	return 0;

}
