#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<cmath>

using namespace std;


void compInterest(double amount, double years); // function prototype


int main()
{

	double principalamount; // principal amount
	double years; // no of years


	cout<<"Enter the principal amount : \n";
	cin>>principalamount;

	cout<<"Enter the no of years to findout the total compoubnd interest: \n";
	cin>>years;

	compInterest(principalamount, years);//calling function

	return 0;
}

void compInterest(double amount, double years)
{
		double totalamount; // total amount after interest
		double interestRate = .05; // default interest rate
		cout<< " Years " <<setw(26)<< " Amount on deposit "<<endl;
		cout<<fixed << setprecision(2);// set floating point
		for(int i = 1; i <= years; i++)
		{
		totalamount = amount * pow(1.0 + interestRate, i);// formulae for compound interest a = p(1+r)^n
		cout<<setw(4)<< i << setw(25)<<totalamount<<endl;
		//amount = totalamount;
		}


}
