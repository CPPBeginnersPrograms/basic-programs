#include<iostream>
#include<iomanip>
using namespace std;


int main()
{
	int usrinput ;
	cin>>usrinput;
    for(int i = 1; i <= usrinput; i++)
	{
        if(i % 3 == 0 && i % 5 == 0)
		{
			cout << "PR\n";
		}
        else if(i % 3 == 0 )
		{
			cout << "P\n";

		}
        else if(i % 5 == 0)
		{
			cout << "R\n";
		}
        else
		{
			cout << i <<"\n";
		}
    }
	return 0;
}

