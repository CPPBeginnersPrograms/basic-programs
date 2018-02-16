#include <iostream>
using namespace std;

int toysPerKid(int ,int);
int main()
{

	int toys = 0;
	do
	{
	cout << "Enter the number of toys: "<< endl;
	cin >> toys;
	}while(toys <= 0);

	int kids = 0;
	do
	{
	cout << "Enter the number of kids: " << endl;
	cin >>kids;
	}while(kids < 0);

	if(kids == 0)
	{
		cout << "No kids showed up" << endl;

	}
	else
	{
		if(toys >= kids)
		{
			cout << "Each kid can have " << toysPerKid(toys, kids) << " toys. " <<endl;

		}
		else
			{
			cout << "Not enough toys for each kid" << endl;
			}
	}
	return 0;

}

int toysPerKid(int toys, int kids)
{
	return (toys/kids);
}

