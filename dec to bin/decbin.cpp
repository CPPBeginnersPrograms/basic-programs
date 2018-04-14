#include<iostream>

using namespace std;


void decBin(int num);
void decHex(int num);

int main()
{

	int n;

	cout<<"Enter the num : \n";
	cin>>n;

	decBin(n);
	decHex(n);
	return 0;

}

void decBin(int num)
{
	int bnum[2000];//storing the binary into array
	int i =0;// counter

	while(num > 0)
	{
		bnum[i] = num % 2; // decimal to bin

		num = num/2;

		i++; //increment the counter to change array index.
	}

	cout<<"The binary digits for the number "<<num<<" : ";
	for(int j = i - 1; j >=0; j--)

		cout<<bnum[j];

}

void decHex(int num)
{
	int bnum[2000];//storing the binary into array
	int i =0;// counter

	while(num > 0)
	{
		bnum[i] = num % 16; // decimal to bin

		num = num/16;

		i++; //increment the counter to change array index.
	}

	cout<<"\nThe Hexdecimal  for the number "<<num<<" : ";
	for(int j = i - 1; j >=0; j--)

		cout<<bnum[j];

}
