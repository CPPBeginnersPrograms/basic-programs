#include<iostream>

using namespace std;

bool primenum(int );

int main()
{
	int pnum;
	char input;
	bool cards;
	do
	{
	cout<<"enter the number : \n";
	cin>>pnum;
	cards = primenum(pnum);
	if(cards == true)
		cout<<pnum<<" its a prime num.";
	else
		cout<<pnum<<" its not a prime num.";
	cout<<"repeat 'Y' or 'N' : \n";
	cin>>input;
	}while(input == 'y' || input == 'Y');
	return 0;

}

bool primenum(int num)
{
	bool cards = true;
	for(int i = 2; i <= num/2; i++)
	{
	if(num % i == 0 )
		{
		cards = false;


	    break;
		}
		}

	return cards;

}
