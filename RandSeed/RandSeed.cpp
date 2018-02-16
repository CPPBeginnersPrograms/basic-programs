#include <iostream>
#include <iomanip>
#include <cstdlib>


using namespace std;

int main()
{

	unsigned seed;
	//int input;
	char input;
	do
	//while( (input = cin.get() )!= EOF) //end of file using but not so good logic in this program
	{
		cout << "enter the seed:"<< endl;
		cin >> seed;

		srand(seed);

		for(int i = 1 ; i <= 10; i++)
		{
			cout<<setw(10)<< (1 + rand()%6);

			if(i % 5 == 0)
				cout << endl;


		}
		cout << "Want To Enter Again? Press 'y'!"<<endl;
		cin >> input;


	}while(input == 'y');

	return 0;

}
