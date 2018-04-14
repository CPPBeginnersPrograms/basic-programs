#include<iostream>
#include<new>
using namespace std;

//class XMLstring
//{
//public :
//	XMLstring(const char *inputStr)
//{
//		m_scString = new char[strlen(inputStr)+1];
//		strcpy(m_scString, inputStr);
//}
//	~XMLstring()
//	{
//		delete[] m_scString;
//		m_scString = NULL;
//
//	}
//	char *getData()
//	{
//		return m_scString;
//	}
//
//private :
//	char *m_scString;
//
//};
//
//int main()
//{
//#if 0
//	XMLstring *xmlStr = new XMLString("CAD/CAM");
//	cout<<xmlStr->getData()<<" xmlStr"<<endl;
//#else
//	 char *stringValue =  XMLstring("CAD/CAM").getData();
//	cout<<stringValue<<" stringValue"<<endl;
//#endif
//return 0;
//}


void pArray(int *iArr)
{

	//iArr = new int[3];
	iArr[0] = 1;
	iArr[1] = 2;
	iArr[2] = 3;
}

int main()
{
	int iarr[3];

	pArray(iarr);

	cout<<iarr[0];

	return 0;

}
