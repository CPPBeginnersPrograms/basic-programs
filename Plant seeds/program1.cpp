//A Red seed will grow into a flower when planted in soil tempratures above 75 d,
//otherwidse it will grow into a mushroom. Assuming the temo meets the condition for
//growing a flower, planting the red seed in wet soil produces a sunflower and
//planting the rerd seed in dry soil will produce dandelion.
//
//A blue seed will grow into a flower when planted in soil tempratures ranging
//from 60 to 70 d,otherwidse it will grow into a mushroom.
//Assuming the temo meets the condition for growing a flower,
//planting the blue seed in wet soil produces a dandelion and
//planting the rerd seed in dry soil will produce a sunflower.
//
//Write a program that will ask the user to iunout the seed color, the soil temp
//and wether the soil is wet or dry adn then output what will grow.

#include <iostream>
#include <string>

using namespace std;

int main()
{

//Ask the user for the seed color
	string seedColor = "";

	cout << "Type the Color of Seed you want ?\n " << "Red or Blue"<< endl;

	getline(cin, seedColor);

	if(seedColor != "Red" && seedColor != "Blue")
	{
		cout << "Invalid option. Program will terminate!"<< endl;

		return 0;
	}


//Get temprature from user

	double temp = 0;

	cout << "Type in the temp (F):"<< endl;

	cin >> temp;


//Get soil moisture from user.

	string soilMoist = "";



//if Red seed actions
	if(seedColor == "Red")
	{


	//If Temp >= 75

		if(temp >= 75)
		{
			//Get soil moisture from user.
			cout << "Type the Soil moisture:\n" << "Wet or Dry ?"<< endl;

			cin >> soilMoist;

			if(soilMoist != "Wet" && soilMoist != "Dry")
			{
				cout << "Invalid Option. Program Terminated!"<< endl;
				return 0;
			}
		//If soil is wet

			if(soilMoist == "Wet")
			{
				//outpout sunflower

				cout << "According to your selected options you will grow a sunflower"<< endl;
			//If soil is dry
			}
			else if(soilMoist == "Dry")

			{
					//output dandelion
				cout << "You will grow a dandelion"<< endl;
			}

		}

	//otherwise
		else
		 {
			 //output mushroom
			 cout << "According to your options the Temp below 75 d will grow a Mushroom"<< endl;
		 }
		}



//if blue seed actions
	if(seedColor == "Blue")
	{


	//If temp is between 60 and 70
		if(temp >= 60 && temp <= 70)
		{
			//Get soil moisture from user.
			cout << "Type the Soil moisture:\n" << "Wet or Dry ?"<< endl;

			cin >> soilMoist;

			if(soilMoist != "Wet" && soilMoist != "Dry")
			{
				cout << "Invalid Option. Program Terminated!"<< endl;
				return 0;
			}

		//if soil is wet
			if(soilMoist == "Wet")
			{


			//output dandelion
				cout << "According to your options you will grow a dandelion"<< endl;

			}
		//if soil dry
			else if(soilMoist == "Dry")
			{
					//output sunflower
				cout << "According to your options you will grow a sunflower"<< endl;
			}

		}
	//otherwise
		else
		{
			//output mushroom
			cout << "According to your options the temp below rangin from 60 -70 d will grow a Mushroom"<< endl;
		}

	}

	return 0;
}











//error statements
//ld: 1 duplicate symbol for architecture x86_64
//clang: error: linker command failed with exit code 1 (use -v to see invocation)
//make: *** [test1] Error 1
//sol below
//Duplicate symbols found error is a linker error, which says that linker has found more than one symbols with the same name. Following are some common causes for this.
//
//You have written a function definition in a header file (outside a class), which is included in two or more cpp files.
//You have defined a static variable twice.
//You have written a function definition twice in a cpp file.
