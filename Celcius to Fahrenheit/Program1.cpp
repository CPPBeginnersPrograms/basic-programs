//We need to convert the user input, if the user needs the
//temp to be in celcius or farenheit.

#include <iostream>

#include <string>

using namespace std;

int main()
{
	// Ask user if he wants the the temp to be viwed in cel or faren

	string temprature = "Celcius";"Fahrenheit";
//or 	string temprature = "";


	int n = 0;
	int N = 0;
	cout << "Do you want convert the temp into Celcius or Fahrenheit ?"<< endl;

	getline(cin , temprature);

	if(temprature != "Celcius" && temprature != "Fahrenheit")
	{
		cout << "Invalid input. Terminated."<< endl;

		return 0;
	}

	//compare if he selected celcius or farenheit

	// Formulae from Celcius to faren

	if(temprature == "Fahrenheit")

	{
		double cal = 0.0;

		double calc = 0.0;

		cout << " Enter the temp in celcius to convert into Farenheit "<< endl;

		cin >> cal;

		if(n != N)
		{
			cout <<"Invalid number!"<< endl;

			return 0;
		}

		calc = (cal*1.8) + 32;

		cout << "The temprature into fahrenheit is \n" << calc <<"°F"<< endl;
	}
	//Formuale from Farenh to celcius
	else
	{

		double cal1 = 0.0;

		double calc1 = 0.0;

		cout << " Enter the temp in Fahrenheit to convert into Celcius "<< endl;

		cin >> cal1;

		if(n != N)
		{
			cout <<"Invalid number!"<< endl;

			return 0;
		}

		calc1= (cal1 - 32)/ 1.8;

		cout << "The temprature into celcuis is \n" << calc1 <<"°C"<< endl;
	}







//	// Ask the user to enter the temp
//	double celcius = 0.0;
//	double farenheit = 0.0;
//
//	cout << "Enter the temp\n";
//	cin >> temprature;
//
//
//	// Formulae from Celcius to faren
//	double cal = 0.0;
//
//	cal = (celcius*1.8) + 32;
//
//	cout << "The temprature into fahrenheit is \n" << cal <<"°F\n";
//
//	//Formuale from Farenh to celcius
//	double cal1 = 0.0;
//	cal1 = (farenheit - 32)/ 1.8;
//	cout << "The temprature into celcuis is \n" << cal1 <<"°C\n";

	return 0;


}
