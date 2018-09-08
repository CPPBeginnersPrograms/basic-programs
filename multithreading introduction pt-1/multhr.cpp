/*
 * multhr.cpp
 *
 *  Created on: Aug 9, 2018
 *      Author: raswantkoushikpeesapati
 */

#include<iostream>
#include<thread>

using namespace std;

void fun() // function (in this case main thread)
{
	cout<<"Welcome to Multi-Threading stl"<<endl;
}

int main()
{
	thread t1(fun);//t1 starts running, here t1 is child thread
	t1.join(); //main thread waits t1 to finish
	//t1.detach(); // t1 runs on its own -- also called as daemon process

	//you can join or detach a thread only once.
	//if you want to rejoin after some time.
	//t1.join // your system will crash, but fortunately we have a mechanism called joinable where you can not rejoin
	//thread but atleast you can stop it from crashing.

	if(t1.joinable())
		t1.join();

	return 0;
}


