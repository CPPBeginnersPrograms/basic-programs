/*
 * multhr1.cpp
 *
 *  Created on: Aug 9, 2018
 *      Author: raswantkoushikpeesapati
 */

// Thread Management

#include<iostream>
#include<thread>

using namespace std;

void fun1()
{
	cout<<"welcome to thread management."<<endl;
}

class Fctor		// functor class is using to called by the thread
{
public :
	void operator()(string msg)
	{
		cout<<"from t1 : "<<endl;
	}
};

int main()
{
	string s = "hello world";
	//in the main thread after it creates the t1 thread and before joining the t1 thread, the main thread has to do
		//some work or else there is no use of threading.
	//Fctor fct; // calling the class object
	thread t1((Fctor()), s);

  // below is some work happening in the main thread, when the parent(main) thread is doing some work it throws out
	//some exception causing t1 thread to destroy. so we need to wrap up the parent thread work with try catch block.
	try{
		for(int i =0; i <10; i++)
			cout<<"from main : "<< i <<endl;
	}catch(...){
		t1.join();
		throw;
	}

	// the alternative approach using Resource acquisition specifically initialization(RAII)
	// or wrapper class around t1 wrapper w(t1);
	// thread can be called by any callable object such as functr or lambda function.above there is class fctor to call t1.

	t1.join();
	return 0;
}


