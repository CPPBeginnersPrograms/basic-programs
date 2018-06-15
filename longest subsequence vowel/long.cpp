#include<iostream>
#include<string>
using namespace std;

int longestSubsequence(string s) {

    char vowels[5] = {'a','e','i','o','u'}; //given char array

    int currentindex = 0;
    int count = 0;

    for(int i=0; i < s.length(); i++) //for the string
    {
        if(s[i] == vowels[currentindex])  //comparing the first index
            count++;//increment count if element found
        else if(count != 0 && s[i] == vowels[currentindex + 1]) { //comparing the next index
            currentindex += 1; //incrementing the current index if element found in the next element.
            count++; //increment count if element found
        }
        else
            continue; //if not continue to next index
    }

    if (currentindex != 4) return 0; // if all the vowels are not found return 0
    else return count; //if all vowels are found the return count of the subsequent

}

int main()
{
	string s;

	cout<<"enter the string : \n";
	cin>>s;

	cout<<"the longest subbsequence in the given string "<<s<<" is :"<<longestSubsequence(s);


	return 0;
}
