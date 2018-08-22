#include<iostream>
#include<string>

using namespace std;

void balanced(string ele);

int main()
{
string str;
cout<<" Enter the Parantheses "<<endl;;
cin>>str;

balanced(str);

return 0;
}

void balanced(string ele)		///simple function without stack O(N)
{
	char ar[4] = {'(',')'};
	int count1=0,count2 = 0;

	for(int i =0 ; i < ele.length(); i++)
	{
		if(ar[0] == ele[i])
			count1++;
		if(ar[1] == ele[i])
			count2++;
	}

	if(count1 == count2)
	{
		cout<<"it is balanced";
	}
	else
		cout<<"not balanced";

}
