/*
 * GChar.h
 *
 *  Created on: Feb 12, 2018
 *      Author: raswantkoushikpeesapati
 */

#ifndef GCHAR_H_
#define GCHAR_H_

#include <iostream>
#include <string>

class GChar
{
	friend std::ostream& operator<<(std::ostream& os, const GChar& gc);
public:
	static const int DEFAULT_CAPACITY = 5;

	//constructors
	GChar(std::string name = "Hero", int capacity = DEFAULT_CAPACITY);

	//copy constructor
	GChar(const GChar& source);

	//overloaded assignment operator
	GChar& operator=(const GChar& source);

	//Destructor
	~GChar();

	//insert function we can inster a new tool in the toolarray/toolHolder
	void insert(const std::string& toolName);

private:

	//data members

	std::string name;
	int capacity;
	int used;
	std::string* toolHolder;
};



#endif /* GCHAR_H_ */
