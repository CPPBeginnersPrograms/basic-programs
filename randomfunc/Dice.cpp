#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main()
{
	//srand(time(NULL)); //it generates the random sequence each time
					   //program executed, if srand func is not present then
						//the the rand func generates the random sequence and repeat
	                    // the same sequence again an again.
	for( int i = 1; i <= 20; i++)
	{
		cout << setw(10) << (1 + rand() % 6); // rand() % 6 is the scaling to print rand numbers from range 0 to 5

		if(i % 5 == 0) // to break the numbers
		cout << endl;

	}
	return 0;

}

