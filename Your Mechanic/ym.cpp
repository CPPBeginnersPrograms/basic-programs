//
// we are looking for a program that manages disjoint intervals of integers e.g[[1,3],[4,6]] is
// a valid object gives two intervals. [[1,3],[3,6]] is not a valid object because it is not disjoint.
// [[1,6]] is the intended result.



#include<iostream>
#include<iomanip>
#include<set>


using namespace std;



//int main()
//{
//
//std::set<int>::iterator it;
////create an empty array
//const int arraySize = 10;
//	int aArray[arraySize] = { }, num;
//
//cout<<"Enter the Elements\n";
//
//
//for(int i  = 1; i <= arraySize; i++)
//	cin>>aArray[i];
//
//
////declare a set
//std::set<int>add;
//
//
//
//
////add elements
//
//add.insert(aArray,aArray+10);
//
////print elements
//cout<<"The elements are: \n";
//for(it = add.begin(); it!= add.end(); it++)
//	cout<<" "<<*it;
//
//cout<<endl;
//
//
//
////erase elements
//int delelement;
//cout<<"Enter the element you want to delete: \n";
//
//cin>>delelement>>delelement;
//
//add.erase(delelement);
//add.erase(delelement);
//
//
////print elements
//cout<<"The elements are: \n";
//for(it = add.begin(); it!= add.end(); it++)
//	cout<<" "<<*it;
//
//return 0;
//}
