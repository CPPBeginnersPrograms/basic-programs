#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
int main(void){
   fstream file;
   // Opening file for writing
   file.open ("test.txt", ios::out);
   if(file.is_open()){
      file << "this line will be written into testfile.dat."<<endl;
      file << "this line also will be written into testfile.dat."<<endl;
      file.close();
   }else{
      cerr<<"Error opening file!!"<<endl;
   }
   string buf;
   // Opening file for reading
   file.open("test.txt",ios::in);
   if(file.is_open()){
      while(getline(file,buf))
      cout<<buf;
      file.close();
   }else{
      cerr<<"Error opening file!!"<<endl;
   }
   return 0;
}
