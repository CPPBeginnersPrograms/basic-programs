#include "GChar.h"

using namespace std;

//constructor

GChar::GChar(string n, int cap)
{
	name = n;
	capacity =cap;
	used = 0;
	toolHolder = new string[cap];
}

//copy constructor

GChar::GChar(const GChar& source)
{
	cout<< "Copy constructor called"<< endl;


	this->name = source.name;
	this->capacity = source.capacity;
	this->used = source.used;
	this->toolHolder = new string[source.capacity]; //deep  copy if toolHolder = source.toolHolder shallow copy

	copy(source.toolHolder, source.toolHolder + used, this->toolHolder);

//	for(int i = 0; i < used; i++)
//	{
//		toolHolder[i] = source.toolHolder[i];
//
//	}
}
	//overloaded assignment operator
	GChar& GChar::operator=(const GChar& source)
	{
		cout << "Overloaded assignment called" << endl;

		// check for self assignment
		// gc1 == gc1
		if(this == &source)
		{
			return *this;
		}
		this->name = source.name;
		this->capacity = source.capacity;
		this->used = source.used;
		copy(source.toolHolder, source.toolHolder + used, this->toolHolder);

		return *this;
	}

	//destructor

	GChar::~GChar()
	{
		cout << "Destructor called for " << this->name
				<< "@ this memory location "<< this <<endl;
		delete[]toolHolder;
	}

	//inserting a new tool into a tool holder.

	void GChar::insert(const string& toolName)
	{
		if(used == capacity)
		{
			cout << "TOOL HOLDER IS FULL. CANNOT ADD ANY OTHER TOOLS"<<endl;
		}
		else
		{
			toolHolder[used] = toolName;
			used++;
		}
	}

	//overloading insertion operator
	std::ostream& operator<<(std::ostream& os, const GChar& gc)
	{
		os << "Game Character "<< gc.name <<
				"\nhas the following tools: "<< std::endl<< "| ";

		for(int i = 0; i < gc.used; i++)
		{
			os << gc.toolHolder[i] + " | ";

		}

		return os <<std::endl;
	}

