#include<iostream>
#include<string>
#include<fstream>
#include<iomanip>

using namespace std;


int main()
{
	ofstream myFile("newfile.txt");		//file processing

	if(myFile.is_open())
	{
		cout<<"Your file is opened.";

		myFile<<"Wats up file stream. \n"<<"wats up buddy";
	}
	else
		cout<<"File is messed up.\n";

	myFile.close();


	ofstream gamersFile("gamersfile.txt");		// writing custom file structures

	if(gamersFile.is_open())
	{
		string playerID;
		string name;
		double money;

		cout<<"Enter the Players ID, Name, Money:\n";
		cout<<"Enter ^d to stop\n";
		//gamersFile << "PlayerID" << setw(20)<<"Name"<< setw(20)<<"Money"<<endl;
		while(cin>>playerID >> name >> money)
		{
			gamersFile << playerID << setw(25)<<name<< setw(20)<<money << endl;
		}
	}
	else
		cout<<"Corrupted File!";

	gamersFile.close();

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
