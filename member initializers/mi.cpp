#include<iostream>

using namespace std;


class MemInit
{
public:
	MemInit(int a , int b);

	void print();
private:
	int regVar; //can be initialized in a normal way in a constructor param like regVar = a;
	const int constVar; // but const var we need a special syntax called member initializers like method below.

};

MemInit::MemInit(int a, int b)
: regVar(a),
  constVar(b)					// member initializers
  {

  }

void MemInit::print()
{
	cout<< " regular var is : "<<regVar<<" , "<<" const var is : "<<constVar<<endl;
}

int main()
{
	MemInit ob(3,90);
	ob.print();

	return 0;
}
