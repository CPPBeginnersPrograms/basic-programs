#include<iostream>

using namespace std;


class Enemy
{
public:
	//virtual void attack() // virtual function is used so that derived class doesnt need to overide the same function.
	virtual void attack() = 0; // pure virtual function, you must need to overwrite the base class public functions.
//	{
//		cout<<"base class responding ;"<<endl;
//	}

	virtual ~Enemy()
	{
		cout<<"out of object"<<endl;
	}
};

class Ninja : public Enemy
{
public:
	void attack()
	{
		cout<<" i am ninja ;"<<endl;

	}
};

class Monster : public Enemy
{
public:

		void attack()							// when the base class has pure virtual function the derived class
									//functions should overwrite, when ever there is a pure virtual function it is an abstract
										//class.
		{
			cout<< " i am monster ;"<<endl;
		}
//	void attack()
//	{
//		cout<< " i am monster ;"<<endl; // her in this commented area the monster class with inherits the base class
								// has the virtual attack funtion working.
//	}
};

int main()
{
	Ninja n;
	Monster m;
	Enemy *enemy1 = &n;
	Enemy *enemy2 = &m;

	enemy1->attack();
	enemy2->attack();

	return 0;
}
