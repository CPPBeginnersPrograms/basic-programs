#include <iostream>
#include <iomanip>
#include<cstdlib> //to access rand() func

using namespace std;


//int main()
//{
//
//	int freqy1 = 0,
//		freqy2 = 0,
//		freqy3 = 0,
//		freqy4 = 0,
//		freqy5 = 0,
//		freqy6 = 0,		//using switch case for rand
//		face1;
//	srand(time(0));
//	for (int roll1 = 1; roll1 <= 6000; roll1++)
//	{
//		face1 = 1 + rand() % 6;
//
//		switch(face1)
//		{
//		case 1:
//
//			freqy1++;
//			break;
//
//		case 2:
//
//			freqy2++;
//			break;
//
//		case 3:
//
//			freqy3++;
//			break;
//
//		case 4:
//
//			freqy4++;
//			break;
//
//		case 5:
//
//			freqy5++;
//			break;
//
//		case 6:
//
//			freqy6++;
//			break;
//
//		default:
//			cout << "you should not get here"<<endl;
//			break;
//		}
//
//
//	}
//
//
//	cout << "Face"<<setw(15)<<"Frequency"
//		<< "\n  1:"<<setw(15)<< freqy1
//		<< "\n  2:"<<setw(15)<< freqy2
//		<< "\n  3:"<<setw(15)<< freqy3
//		<< "\n  4:"<<setw(15)<< freqy4
//		<< "\n  5:"<<setw(15)<< freqy5
//		<< "\n  6:"<<setw(15)<< freqy6<<endl;
//
//	int summ = freqy1 + freqy2 + freqy3 + freqy4 + freqy5 + freqy6;
//		cout << "sum is "<< summ<<endl;
//	return 0;
//}

int main()
{

	const int arraySize = 7;
	int frequency[arraySize]= {0};

	srand(time(0));

	for(int roll = 1; roll <= 6000; roll++)
		++frequency[1 + rand() % 6];

	cout << "Face "<< setw(12)<< "Frequency"<<endl;

	for(int face = 1; face < arraySize; face++)
		cout<<setw(3)<< face << setw(12) << frequency[face]<<endl;

}
