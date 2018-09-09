#include<iostream>
#include<stack>
#include<string>

using namespace std;

void paran(string ele);


int main()
{
	string elems;
	char input = 0;

	while(input != 'q')
	{
	cout<<" Enter the Parans to check if it is balanced or not, Press q to quit :"<<endl;
	cin>>elems;

	paran(elems);
	}
	return 0;
}

void paran(string ele)
{
	stack<char>pars;
	int top = -1;

	if(ele.at(0) == ')')
	{
		top--;
	}

	for(int i = 0; i< ele.size(); i++)
	{

		if(ele[i] == '(')
		{
			top++;
			pars.push(ele.at(i));
			//cout<<"it worked"<<endl;
		}
		else if(ele[i] == ')' && pars.top() == '(')
		{
			top--;
			pars.pop();
			//cout<<"it worked2"<<endl;
		}
		else if(ele[i] == '(')
		{
			top--;
			//cout<<"it worked3"<<endl;
		}
	}
	if(top == -1)
	{
		cout<<ele<<" is balanced "<<endl;
	}
	else
	{
		cout<<ele << " is not balanced "<<endl;
	}


}
