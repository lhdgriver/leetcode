#include<iostream>
using namespace std;


class Solution {
public:
	string reverseVowels(string s) {
		int start = 0, end = s.length()-1;
		while(start < end) {
			while(start <= end && !is_vowel(s[start]))
				start++;
			while(start <= end && !is_vowel(s[end]))
				end--;
			if (start >= end) break;	

			swap(s[start], s[end]);
			start++;
			end--;
		}

		return s;
	}
private:
	bool is_vowel(char c) {
		if (c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U')
			return true;
		return false;
	}
};

int main()
{
	Solution s;
	cout << s.reverseVowels("hello") << endl;
	return 0;
}
