#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int getTheItems();
void display(int);
// main function
int main()
{
	int selectTheItems;

	selectTheItems = getTheItems();

	while(selectTheItems < 4)
	{
		switch(selectTheItems)
		{
		case 1:
			display(1);
			break;
		case 2:
			display(2);
			break;
		case 3:
			display(3);
			break;
		default:
			cout<<"Program exited."<<endl;
		}
		selectTheItems = getTheItems();
	}
return 0;
}
// gettheitems function
int getTheItems()
{
	int choices;

	cout<<"\n 1. Helpful items "<<endl;
	cout<<" 2. Dangerous items "<<endl;
	cout<<" 3. Normal items "<<endl;
	cout<<" 4. quit  \n"<<endl;

	cin>>choices;

	return choices;
}

//display function
void display(int x)
{
	ifstream myobject("objects.txt");

	string name;
	double power;

	if(x==1)
	{
		while(myobject >> name >> power )
		{
			if(power > 0)
			{
				cout<<name << ' '<<power<<endl;
			}
		}
	}
	if(x==2)
		{
			while(myobject >> name >> power )
			{
				if(power < 0)
				{
					cout<<name << ' '<<power<<endl;
				}
			}
		}
	if(x==3)
		{
			while(myobject >> name >> power )
			{
				if(power == 0)
				{
					cout<<name << ' '<<power<<endl;
				}
			}
		}
}
