/*
 * Vpet.h
 *
 *  Created on: Jan 19, 2018
 *      Author: raswantkoushikpeesapati
 */

#ifndef VPET_H_
#define VPET_H_

#include <iostream>

class Vpet
{
	public:

//		friend function can access private data member of a class but its not an
//		actual member function

		friend std::ostream& operator<<(std::ostream& os, const Vpet& vp);

		// Constructors (Special type member functions)
		Vpet(int weight, bool hungry);
		Vpet();

		// Member Functions

		void feedPet(int amount);
		bool getHungry();
		double getWeight();

	private:

	// Data Members

	double weight;
	bool hungry;
};




#endif /* VPET_H_ */
