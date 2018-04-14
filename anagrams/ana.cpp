#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int number_needed(string a, string b)
{
	//time complexity O(n);
    int count1[10000] = {0}, count2[10000] = {0};

	for(int i =0; a[i] != '\0'; i++)
		count1[a[i] - 'a']++;
	for(int i =0; b[i]!= '\0'; i++)
		count2[b[i] - 'a']++;

	int result = 0;
	for(int i =0; i < 26; i++)
	result += abs(count1[i] - count2[i]);

	return result;

	// for small and more complexity

//	int num = 0;
//	int count = 0;
//	for(int i = 0; i < a.length(); i++)
//	for(int j =0; j < b.length(); j++)
//		if(a[i] == b[j])
//			num += 2;
//
//	 count = (a.length() + b.length()) - num;
//
//	return count;
}

int main(){
    string a;
    cin >> a;
    string b;
    cin >> b;
    cout << number_needed(a, b) << endl;
    return 0;
}
