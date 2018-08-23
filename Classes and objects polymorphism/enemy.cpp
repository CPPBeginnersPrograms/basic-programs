#include<iostream>
#include"enemy.h"

using namespace std;

Enemy::Enemy()
{
	attackPower = 0;
}

void Enemy::setAttackPower(int a )
{
	attackPower = a;
}

const int Enemy::getAttackPower()
{
	return attackPower;
}
