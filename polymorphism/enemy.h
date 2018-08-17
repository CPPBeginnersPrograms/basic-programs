/*
 * enemy.h
 *
 *  Created on: Aug 17, 2018
 *      Author: raswantkoushikpeesapati
 */

#ifndef ENEMY_H_
#define ENEMY_H_

//base class of enemy

class Enemy
{
private:
	//data member to give access to all derived class
	int attackPower;
public:
	//constructor
	Enemy();

	//accessor
	const int getAttackPower();

	//mutator
	void setAttackPower(int);
};



#endif /* ENEMY_H_ */
