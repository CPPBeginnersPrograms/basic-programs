#include<iostream>

using namespace std;

int NewSum(int *a, int *b);

int SumSeq(int *A, int n)
{
	int sum;
	for(int i = 0; i < n; i++)
	{
		sum = NewSum(&A[i] , &A[i + 1]);
	}
	return sum;
}

int NewSum(int *a, int *b)
{
	int val = *a + *b;
	return val;
}
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


//	int total = 0;
//	for(int num = 2; num <= 20; num += 2)
//	{cout<<num;
//	total += num;}
//	cout<<"\n"<<total;

	int arrA[6]= {0,1,2,3,4,5};

	for(int k = 0; k < 6; k++)
	{
		for(int i = 0; i < 6; i++)
		{
			cout<<arrA[k]<<" ";
			cout<<arrA[i];
		}
	}
	cout<<endl<<endl;
	for(int i = 0; i < 6; i++)
	{
		cout<<arrA[i];
	}
		cout<<endl;

//	for(int a : arrA)// range based for loop
//	{
		cout<<SumSeq(arrA,6);
//	}

		cout<< "\nLook at this "<<endl;
		int ar[8] = {0,1,2,3,4,5,6,7};

		for(int i = 0; i < 8; i++)
		{
			for(int j = i + 1 ; j < 8; j++)
			{
				cout<<ar[i]<<" "<<ar[j];
			}
		}
		return 0;
}
