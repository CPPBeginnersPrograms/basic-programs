#include <iostream>
#include <array>
using namespace std;


int main()
{
	//double cricketScore[7]; we can do like this but the formal way to do is below ie array container class

	array <double, 7> cricketScore;



	cricketScore[0] = 292;
	cricketScore[1] = 323;
	cricketScore[2] = 400;
	cricketScore[3] = 230;
	cricketScore[4] = 500;
	cricketScore[5] = 60;
	cricketScore[6] = 490;

	//cricketScore.at(7) = 990; causes run time error, because we allocated space for 7 index this particular index is not associated with that array.;

//	for(int i = 0; i < 7; i++)
	for(size_t i = 0; i < cricketScore.size(); i++)
	{

		cout << cricketScore[i]<< endl;

	}
//	for(int i = 0; i < 7; i++)
	for(size_t i = 0; i < cricketScore.size(); i++)
		{
			cout << "enter a score" << endl;

			cin >> cricketScore[i];

		}

//	for(int i = 0; i < 7; i++)
	for(size_t i = 0; i < cricketScore.size(); i++)
		{

			cout << cricketScore[i]<< endl;

		}
	return 0;
}
