// input and output in c++

#include<iostream>
#include<string>
using namespace std;

int main()
{
	string name = "";
	int age = 0;
	cout << "enter your name: \n";
	cin >> name;

	cout << " enter your age: ";
	cin >> age;

	 cout << "your name is: " << name << ".\nYour age is: "<< age << ".";

	return 0;
}
