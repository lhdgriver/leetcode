#include<iostream>
using namespace std;


class Solution {
public:
	string addBinary(string a, string b) {
		int a_v, b_v, carry = 0, remain;
		string ret = "";
		for (int i = 0; i < max(a.length(), b.length()); i++) {
			if (i < a.length())
				a_v = a[a.length() - 1 - i] - '0';
			else	
				a_v = 0;
			if (i < b.length())
				b_v = b[b.length() - 1 - i] - '0';
			else
				b_v = 0;
			remain = (carry + a_v + b_v) % 2;
			carry = (carry + a_v + b_v) / 2;
			ret = to_string(remain) + ret;
		}

		if (carry == 1)
			ret = "1" + ret;
		return ret;
	}
};

int main() {
	Solution s;
	cout << s.addBinary("1", "11") << endl;
	return 0;
}
