#include<iostream>
using namespace std;


class Solution {
public:
	string reverseString(string s) {
		for(int i=0; i<s.length()/2; i++) {
			swap(s[i], s[s.length()-i-1]);
		}
		return s;
	}
};

int main()
{
	Solution s;
	string i = "hello";
	cout << s.reverseString(i) << endl;
	cout << i << endl;

	return 0;
}
