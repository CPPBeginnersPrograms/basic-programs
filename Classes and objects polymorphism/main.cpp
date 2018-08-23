#include<iostream>
#include"ninja.h"
#include"monster.h"

int main()
{
	Ninja n;
	Monster m;
	Enemy *enemy1 = &n;
	Enemy *enemy2 = &m;

	enemy1->setAttackPower(10);
	enemy2->setAttackPower(29);

	n.attack();
	m.attack();
	return 0;
}
