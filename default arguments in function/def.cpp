#include <iostream>

using namespace std;

//inline float boxVol(float = 1, float =1 ,float =1  ); func prototype with out type identifiers will also work
inline float boxVol(float heigth = 1, float width = 1 ,float length = 1  );
int main()
{
	cout << "The default values when box vol is called: "<< boxVol()
		 << "\n The value when height is given  : " << boxVol(10)
		 <<"\nThe value when height and width is given: "<<boxVol(10,5)
		 <<"\n The value when all the three given : "<< boxVol(10,5,2)
		 <<"\nThe value when fun calling fun within the arguments : "<< boxVol(boxVol(10,5,2), 2, 3)<<endl;
	return 0;

}
inline float boxVol(float heigth, float width, float length)
{
	return heigth * width * length;
}
