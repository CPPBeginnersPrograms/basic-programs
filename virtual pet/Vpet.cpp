//Write a program that models a virtual pet. We will assume the pet will have a weight and
//can be in a state of beign hungry or not hungry. The pet can be fed which will turn
//effect the pet's hunger state and according the following,
//1) If the food weight is greater than or equal to one half of the pet's weight, the pet
// will not be hungry, otherwise it will be hungry.
//2) The weight added to the pet will be quarter of the food weight.

#include "Vpet.h"

Vpet::Vpet(int w, bool hun):weight(w),hungry(hun)
{

}

Vpet::Vpet():weight(100),hungry(true)
{

}

void Vpet::feedPet(int amt) //it doesnt have a return type so void is used.
{
	if(amt >= 0.5 * weight)
	{
		hungry = false;
	}
	else
	{
		hungry = true;
	}
	weight = weight + 0.25 * amt;
}

double Vpet::getWeight()
{
	return weight;
}

bool Vpet::getHungry()
{
	return hungry;
}

std::ostream& operator<<(std::ostream& os, const Vpet& vp)
{
	std::string hungerStatus = "";

	if(vp.hungry)
	{
		hungerStatus = "hungry";

	}
	else
	{
		hungerStatus = "not hungry";

	}
	return os << "weight: " << vp.weight << " hunger status: "
			 << hungerStatus << std::endl;

}
