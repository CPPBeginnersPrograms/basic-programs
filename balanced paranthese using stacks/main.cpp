#include<iostream>
#include<string>

using namespace std;

void bParan(string ele);

int main()
{
	string ele;
	char input;
	do{
	cout<<"Enter the string :"<<endl;
	cin >> ele;
	bParan(ele);
	cout<<"Press y to continue ";
	cin>>input;
	}while( input == 'y');
	return 0;
}

void bParan(string ele)
{
	int top = -1;
	char *stack = new char[1000];

	if(ele[0] == ')')
		top -= 1;

	for(int i = 0; i < ele.length(); i++)
	{
		if(ele.at(i) == '(')
		{
			top += 1;
			stack[top] = '(';
		}
		if(ele.at(i) == ')' && stack[top] == '(')
		{
			top -= 1;
		}
		else if(ele.at(i) == ')')
		{
			top -= 1;
		}
	}
	if(top == -1)
	{
		cout<< " is balanced ";
	}
	else
		cout<< "not balanced ";

	delete[] stack;
	stack = NULL;
}
