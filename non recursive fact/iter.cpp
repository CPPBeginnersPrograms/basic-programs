#include <iostream>

using namespace std;

unsigned long iterfact( unsigned long);


int main(){

	int size;
	char input;
do
{
	cout<< "Enter the Factorial integer:"<<endl;
	cin >>size;


	cout << " Factorial of "<< size <<"!"<<" is : "<< iterfact(size)<< endl;

	cout << endl<<"Press 'y' to enter integer again:"<<endl;
	cin>> input;
	cin.sync();
}while(input == 'y');



	return 0;

}

unsigned long iterfact( unsigned long num)
{
	int fact = 1;
	for(int i = num; i >= 1; i--)
		{
			fact *= i;


		}

	return fact;
}
