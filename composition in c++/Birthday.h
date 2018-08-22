/*
 * Birthday.h
 *
 *  Created on: Aug 19, 2018
 *      Author: raswantkoushikpeesapati
 */

#ifndef BIRTHDAY_H_
#define BIRTHDAY_H_



class Birthday {
public:

	Birthday(int nMonth, int nDate, int nYear);
	void printBirthDate();
private:
	int month;
	int date;
	int year;
};

#endif /* BIRTHDAY_H_ */
