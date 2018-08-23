#include<iostream>
#include"monster.h"

void Monster::attack()
{
	std::cout<<"Monster ate you  -"<<getAttackPower()<<std::endl;
}
