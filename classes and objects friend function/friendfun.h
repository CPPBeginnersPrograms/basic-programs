/*
 * friendfun.h
 *
 *  Created on: Aug 19, 2018
 *      Author: raswantkoushikpeesapati
 */

#ifndef FRIENDFUN_H_
#define FRIENDFUN_H_

class FriendFun {
public:
	FriendFun(int x);

private:
	int X;

friend void printFun(FriendFun &obj);
};

#endif /* FRIENDFUN_H_ */
