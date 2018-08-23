#include<iostream>
#include<queue>
#include<string>

using namespace std;

string input;
int size;
int main()
{
	queue<string>myQ;

	cout<< " Enter the Queue Size: ";
	cin>>size;

	for(int i =0; i < size; i++)
	{
		cout<<" Enter the Name : ";
		cin>>input;
		myQ.push(input);
	}

	cout<<"The size of the Queue is : "<<myQ.size()<<endl;
	cout<<"\n\n Back of the Queue is : "<<myQ.back()<<endl;
	cout<<endl<<endl;
	while(!myQ.empty())
	{
		cout<<"Removing Name : "<< myQ.front()<<endl;
		myQ.pop();
	}

	cout<<"The size of the Queue is : "<<myQ.size()<<endl;

	return 0;
}

