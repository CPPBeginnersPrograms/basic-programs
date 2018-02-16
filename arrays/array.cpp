#include <iostream>
#include "arr.h"
using namespace std;


int main()
{
	double cricketScore[7];




	cricketScore[0] = 292;
	cricketScore[1] = 323;
	cricketScore[2] = 400;
	cricketScore[3] = 230;
	cricketScore[4] = 500;
	cricketScore[5] = 60;
	cricketScore[6] = 490;

	//cricketScore.at(7) = 990; causes run time error;

	printArray(cricketScore, 7);

	userInputArray(cricketScore, 7);

	printArray(cricketScore, 7);

	return 0;
}
