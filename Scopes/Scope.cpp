#include<iostream>

using namespace std;

void a ();
void b ();
void c ();

const double PI = 3.14159265358979;// global varaible
int x = 1; //global varaible

int main()
{
	//const float PI = ::PI we can aslo declare like this but dont know whats the problem.
	//const variable is a constant variable that cannot be modified or changed.
	const float PI = static_cast<float>(::PI);// :: unary scope resolution

	cout << "The Value of Float PI is : "<< PI
		<<"\n The value of double PI is: "<< ::PI <<endl;

	int x = 5; // local varaible to main

	cout << "\nlocal x in outer scope of main is " << x << endl;

	{	//start new scope
		int x = 7;

		cout << "local x in inner scope is " << x <<endl;

	}
	cout << "local x in outer scope main is "<< x << endl;


	a(); 		//a has automatic local x
	b();			//b has static local x
	c();			//c has global x
	a();			//a reinitialize automatic local x
	b();			// static local x retains it previous values
	c();			// global x retains its previous values

	cout << endl<<"local x in main is "<< x <<endl;
	return 0;
}

void a()
{
	int x = 25; //initialzied each time a is called

	cout << endl << "local x in a is " << x << " after entering a "<<endl;

	++x;
	cout  << "local x in a is " << x << " before exiting a "<<endl;


}

void b()
{
	static int x = 50;//initialzied each time b is called // static storrage specifiers retaing its value
					  //when fucn exited
					  // that means the value of x when the fuction exits will
					  //be stored in static.
	cout << endl << "local x in b is " << x << " on entering b "<<endl;

	x++;
	cout <<  "local x in b is " << x << " on exiting b "<<endl;


}
void c()
{


	cout << endl << "global x  is " << x << " on  entering c "<<endl;

	x *= 10;
	cout <<  "global x is " << x << " on exiting c "<<endl;

}
