//create a program that displays the average scores from metacritics
//metascore and rotten tomatoes tomatometer for a movie.
//The average score must be displayed on a 10 point scale. The movie title
//and scores will be implemented by the user.

#include <iostream>
#include <string>
using namespace std;

int main()
{

	// get the name of the movie
	string movie = "";
	cout << "what is the name of the movie: \n";
	// cin >> movie;
	getline(cin, movie);

	//get the metascore
	double Metascore = 0;
	cout << "What is the metascore rating for " << movie << " movie out of 100 ?\n";
	cin >> Metascore;

	// get the tomatometer score
	double Tomatometer = 0;
	cout << "What is the Rotten Tomato Score for " << movie << " movie out of 100 ?\n";
	cin >> Tomatometer ;


	// calculate the average of the two scores.
	double average = 0.0;

	average = (Metascore + Tomatometer ) / 2.0;

	cout << "The average of the two scores is:\n" << average  << ".\n";



	// rescale average.

	double rescaledScore = average / 10;

	//display the result of our calculations.

	cout << "Our calculated average on a 10 point scale for the movie " << movie << " is "
			<< rescaledScore << ".";

	return 0;
}
