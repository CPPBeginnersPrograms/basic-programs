#include<iostream>
#include<stack>
#include<string>
#include<sstream>
using namespace std;

bool isOperator(const string &input);
void performOp(const string &input, stack<double>&newStack);
int main()
{
	cout<< " RPN Calculator : "<<endl;

	stack<double>rpnCal;
	string input;

	while(true)
	{
		//display prompt
		cout<< ">>";
		//get input
		cin >> input;
		//check for numeric value
		double num;
		if(istringstream(input) >> num)
		{
			rpnCal.push(num);
		}
		//check for operator
		else if (isOperator(input))
		{
			performOp(input , rpnCal);
		}
		//check for quit
		else if (input == "q")
		{
			return 0;
		}
		//invalid input
		else
		{
			cout<< " Invalid input ";
		}
	}
}

bool isOperator(const string &input)
{
	string ops[ ] = {"-", "+", "*", "/"};

	for(int i = 0; i < sizeof(ops); i++)
	{
		if(ops[i] == input)
		{
			return true;
		}
	}

	return false;
}

void performOp(const string &input, stack<double>&newStack)
{
	double rval, lval, result;

	rval = newStack.top();
	newStack.pop();

	lval = newStack.top();
	newStack.pop();

	if(input == "-")
	{
		result = lval - rval;
	}
	else if(input == "+")
	{
		result = lval + rval;
	}
	else if(input == "*")
	{
		result = lval * rval;
	}
	else
		result = lval / rval;

	cout<< result <<endl;
	newStack.push(result);

}
