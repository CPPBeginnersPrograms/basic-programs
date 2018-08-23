/*
 * add.h
 *
 *  Created on: Jul 3, 2018
 *      Author: raswantkoushikpeesapati
 */

#ifndef ADD_H_
#define ADD_H_

class Addition
{
public:

	Addition (long value1, long value2); //cons
	void setAddVal(long value1, long value2); // set member function //the parameters are same as the construcotr's.
																	//the parameters are local to each other so they
																	//dont interfere.
	long getAddVal(); //get member function
private:
	long val; //data member
};

class Subtraction
{
public:
	Subtraction (long value1, long value2);
	void setSubVal(long value1, long value2);
	long getSubVal();

private:
	 long val;
};



#endif /* ADD_H_ */
