#include<iostream>
using namespace std;


class Solution {
public:
	int strStr(string haystack, string needle) {
		if (haystack.length() < needle.length()) return -1;
		for(int i = 0; i <= haystack.length() - needle.length(); i++) {
			bool found = true;
			for(int j = 0; j < needle.length(); j++) {
				if (haystack[i+j] != needle[j]) {
					found = false;
					break;
				}
			}
			if (found == true)
				return i;
		}
		return -1;
	}
};

int main() {
	Solution s;
	cout << s.strStr("", "a") << endl;
	return 0;
}
