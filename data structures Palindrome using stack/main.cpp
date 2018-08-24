#include<iostream>
#include<stack>
#include<vector>
#include<string>


using namespace std;
void palin(string ele);
int main()
{

	string name ;
	char input = 0;
	while(input != 'q')
	{
	cout<< "\nEnter the string to check if it is a palindrome  or Press 'q' to quit : "<<endl;
	cin >> name;
	palin(name);
	}
}

void palin(string ele)
{
	 stack<char>elems;

	 for(int i = 0; i < ele.size() ; i++)
	 {
		 elems.push(ele.at(i));
	 }

	 for(int i = 0; i < ele.size() ; i++)
	 {
		 if(ele.at(i) == elems.top())
		 {
			 elems.pop();
		 }
	 }

	 if(elems.empty() == true)
	 {
		 cout<<ele<<" : is a palindrome"<<endl;
	 }
	 else
		 cout<<ele<<" : is not a palindrome"<<endl;


}




