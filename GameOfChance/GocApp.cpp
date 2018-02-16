#include "Goc.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{

	enum Status {CONTINUE, WON, LOST}; //gamestatus
	Status gameStatus;
	int sum, mypoints;

	srand(time(NULL));
	sum = rolldice();  						// first time rolling

	switch(sum)
	{

	case 7:									//first roll won
	case 11:
		gameStatus = WON;
		break;

	case 2:
	case 3:
	case 12:
		gameStatus = LOST;					//first roll lost
		break;

	default:
		gameStatus = CONTINUE;				//continue to play
		mypoints = sum;
		cout << "MY Points: "<< mypoints<<"\n"<<endl;
		break;
	}

	while(gameStatus == CONTINUE)
	{
		sum = rolldice();					//rolling again

		if(sum == mypoints)					//win by making player point
		{
			gameStatus = WON;
		}
		else if(sum  == 7)					//lost by rolling 7!
		{
			gameStatus = LOST;
		}

	}

	if (gameStatus == WON)
	{
		cout << "Player Won!!."<<endl;
	}
	else
	{
		cout <<"Player Lost!!"<<endl;
	}
	return 0;
}
