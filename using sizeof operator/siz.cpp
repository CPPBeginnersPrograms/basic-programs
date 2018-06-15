#include<iostream>

using namespace std;

size_t getsize(float *);	//size_t is an unisigned integer which returns size from sizeof operator.


int main()
{

	float array[20];

	cout<<"the number of bytes in the array is "
			<<sizeof (array)
			<<"\n the number of bytes returned by the getsize is "
			<<getsize(array)<<endl
			<<sizeof array / sizeof(float)<<": is the size of array elements";
	return 0;

}

size_t getsize(float *ptr)
{
	return sizeof(*ptr);
}
