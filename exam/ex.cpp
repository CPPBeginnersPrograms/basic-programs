#include<iostream>

using namespace std;

int main()
{
//	int ele1, ele2;
//	//int arra[100];
//	int product = 3;
//
//	cin>>ele1 >> ele2;
//
//	if(ele1 > 5)
//	{
//		if(ele2 > 5)
//
//			cout<<"Elements are greater than 5\n";
//	}
//	else
//		cout<<"ele1 is < 5";
//
//	while(product <= 100)
//	{
//		product *= 3;
//	}
//
//	cout<< product;
	int total = 0;
	for(int num = 2; num <= 20; num += 2)
	{cout<<num;
	total += num;}
	cout<<"\n"<<total;

	return 0;
}
