#include<iostream>

using namespace std;


int main()
{
	int momsage;
	int sonsage;

	cout<<"enter mom's age "<<endl;
	cin>>momsage;

	cout<<" enter son's age "<<endl;
	cin>>sonsage;

	try{
		if(momsage < sonsage)
			throw 99;
		else
			cout<<"Mom is older than son."<<endl;
	}
	catch(...)
	{
		cout<<"\nERROR MSG :"<<" Mom's age cannot be less than Son's age."<<endl;
	}


	return 0;
}
