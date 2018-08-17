#include<iostream>
#include<vector>

using namespace std;

void fillarray(vector<int>&);

void printvector(const vector<int>&);

void reverse(const vector<int>&);

void printevens(const vector<int>&);

void replace( vector<int>&);
int main()
{
	vector<int>myvector;

	fillarray(myvector);
	printvector(myvector);
	reverse(myvector);
	printevens(myvector);
	replace(myvector);
	cout<<endl;



return 0;
}

void fillarray(vector<int>& fillvector)
{
	int input;

	cout<< "\n enter the nums or press -1 to stop: ";
	cin>>input;

	while(input != -1)
	{
		fillvector.push_back(input);
		cin>>input;
	}
}
void printvector(const vector<int>& pvector)
{
	cout<<" vectors list : "<<endl;
	cout<<"|";
	for(int i =0; i < pvector.size(); i++)
	{
		cout<<pvector.at(i)<<"|";
	}
	cout<<endl;
}
void reverse (const vector<int>& revvector)
{
	cout<<" reverse vector : "<<endl;

	cout<<"|";
	for(int i = revvector.size(); i > 0; i--)
	{
		cout<<revvector.at(i-1)<<"|";
	}
}
void printevens(const vector<int>& evenvector)
{
	cout<<endl;
	cout<< " evens are : "<<endl;

	cout<<"|";
	for(int i =0; i < evenvector.size(); i++)
		{
			if(evenvector.at(i) % 2 == 0)
				cout<<evenvector.at(i)<<"|";
		}
}
void replace(vector<int>& repvector)
{
	int oldvalue, replacevalue;

	cout<<endl;
	cout<<" enter an old number from the list to replace with a new number( enter 2 ints old and new): "<<endl;
	cin>>oldvalue>>replacevalue;

	for(int i = 0; i < repvector.size(); i++)
	{
		if(repvector.at(i) == oldvalue)
			repvector.at(i) = replacevalue;

	}

	printvector(repvector);
}
