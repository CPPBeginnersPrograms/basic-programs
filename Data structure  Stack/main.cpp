#include<iostream>
#include<stack>

using namespace std;

int size;
int main()
{
	stack<double>myStack;
	int input;

	cout<< " enter the size : "<<endl;
	cin >>size;
//	myStack.push(10);
//	myStack.push(9);
//	myStack.push(8);
//	myStack.push(7);
//	myStack.push(6);


	for(int i = 0; i < size; i++)
	{
		cout<<" Enter : "<<endl;
		cin>>input;
		myStack.push(input);
	}

	cout << " myStack size : "<<myStack.size()<<endl;


	while(!myStack.empty())
	{
	cout<< " popping : "<<myStack.top()<<endl;
	myStack.pop();
	}

	cout << " myStack size : "<<myStack.size()<<endl;
	return 0;
}
