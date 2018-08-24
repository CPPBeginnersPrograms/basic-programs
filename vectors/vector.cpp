#include <iostream>
#include <vector>

using namespace std;

void printVector(vector<int>&v)
{
	cout << "|";
	for(int i =0; i < v.size(); i++ ){
		cout << v.at(i) << "|";
	}
}
int main()

{

	vector<int> myvector;
	vector<int> v(6);

	v[0] = 10;
	v[1] = 22;
	v[2] = 5;
	v[4] = 9;
	v.push_back(7);

	cout << v.front() << endl;
	cout << v.back() << endl;
	cout << v.at(4) << endl;

	printVector(v);

	myvector.push_back(4);
	myvector.push_back(9);
	myvector.push_back(10);
	myvector.push_back(20);

	cout<< endl<<"myvector : ";
	for(unsigned int i =0; i < myvector.size(); i++)
	{
		cout<<myvector[i]<<" ";
	}

	cout<<endl<<" my vector : ";
	myvector.insert(myvector.begin(), 11);
	myvector.insert(myvector.begin() + 2, 12);

	for(unsigned int i =0; i < myvector.size(); i++)
		{
			cout<<myvector.at(i)<<" ";
		}

	myvector.erase(myvector.begin() + 3);

	cout<<endl<<" my vector : ";
	for(unsigned int i =0; i < myvector.size(); i++)
			{
				cout<<myvector.at(i)<<" ";
			}

	if(myvector.empty())
	{
		cout<<"\nis empty.";
	}
	else
	{
		cout<<"\n not empty";
	}

	myvector.clear();
	if(myvector.empty())
		{
			cout<<"\nis empty.";
		}
		else
		{
			cout<<"\n not empty";
		}
	return 0;

}
