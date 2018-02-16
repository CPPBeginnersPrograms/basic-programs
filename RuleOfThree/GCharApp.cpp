#include "GChar.h"

using namespace std;

GChar exCopyCons(GChar tempGC)
{
	cout << "Copy constructor called twice" <<endl;
	cout<< "Once for the formal parameter beign passed by value" << endl;
	cout << "Once for the return value."<< endl;

	return tempGC;
}

int main()
{
	GChar gc1("black", 6);

	gc1. insert("Potion");
	gc1. insert("Sword");
	gc1. insert("Axe");
	gc1. insert("Missile");
	gc1. insert("Candle");
	gc1. insert("Book of Spells");
	cout << gc1 << endl;

	GChar gc2("Iron man", 6);

	gc2.insert("Potion");
	gc2.insert("Gun");
	gc2.insert("Bow");
	gc2.insert("Whip");
	gc2.insert("Food");
	gc2.insert("Axe");

	cout << gc2  <<endl;

	//exCopyCons(gc2);

//	GChar gc3;
//
//	gc3.insert("potion");

	//copy constructor
	GChar gc3 = gc2;
	cout << "gc3 :  "<< gc3 <<endl;


	//overload assignment operator
	gc2 = gc1;

	cout << "gc2 : " << gc2 <<endl;
	cout << "gc1 : " << gc1 <<endl;




}
