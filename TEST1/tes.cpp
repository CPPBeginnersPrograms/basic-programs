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
	string color1 = "Red1";"Blue1";

	cout << "Type the Color of Seed you want ?\n " << "Red1 or Blue1\n";

	getline(cin, color1);


//Get temp from user

	double temp1 = 0;


	cout << "Type in the temp:\n" ;

	cin >> temp1;

	//Get soil moisture from user.
	string moist1 = "Wet1";"Dry1";






//if Red seed actions
	if(color1 == "Red1")
	{


	//If Temp >= 75

		if(temp1 >= 75)
		{
			cout << "Type the Soil moisture:\n" << "Wet1 or Dry1 ?\n\n";

			cin >> moist1;

		//If soil is wet

			if(moist1 == "Wet1")
			{
				//outpout sunflower

				cout << "According to your selected options you will grow a sunflower\n";
			//If soil is dry
			}
			else if(moist1 == "Dry1")

			{
					//output dandelion
				cout << "You will grow a dandelion\n";
			}

		}

	//otherwise
		else
		 {
			 //output mushroom
			 cout << "According to your options the Temp below 75 d will grow a Mushroom\n";
		 }
		}



//if blue seed actions
	else if(color1 == "Blue1")
	{


	//If temp is between 60 and 70
		if(temp1 >= 60 and temp1 <=70)
		{
			cout << "Type the Soil moisture:\n" << "Wet1 or Dry1 ?\n\n";

			cin >> moist1;

		//if soil is wet
			if(moist1 == "Wet1")
			{


			//output dandelion
				cout << "According to your options you will grow a dandelion\n";

			}
		//if soil dry
			else if(moist1 == "Dry1")
			{
					//output sunflower
				cout << "According to your options you will grow a sunflower\n";
			}


	//otherwise
		else
		{


	//output mushroom
			cout << "According to your options the temp below rangin from 60 -70 d will grow a Mushroom\n";
		}
		}
	}

	return 0;
}



