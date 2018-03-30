#include <iostream>

using namespace std;


 inline float cube(const float);

 int main()
 {
	 cout << "Enter the side of an integer for the cube "<<endl;

	 float side;
	 cin >> side;

	 cout << "The integer of the side "<< side << " is: "<< cube(side)<<endl;

	 return 0;
 }

  inline float cube(const float s)
{
	return s * s * s;
}
