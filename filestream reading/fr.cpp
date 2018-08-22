#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main()
{
	ifstream gameFile("gamersfile.txt");			//reading data from files

	string playerid;
	string name;
	double money;

	while(gameFile>> playerid >> name >> money)
	{
		cout<< playerid <<' '<< name <<' '<< money<<endl;
	}
	return 0;
}
