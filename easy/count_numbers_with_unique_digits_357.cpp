#include<iostream>
using namespace std;


class Solution {
public:
	int countNumbersWithUniqueDigits(int n) {
		if (n == 0) return 1;
		if (n == 1) return 10;
		int ret = 10;
		int prev_prod = 9;
		for(int i = 2; i <= n; i++) {
			if (i == 11) break;
			prev_prod *= (10 - i + 1);
			ret += prev_prod;
		}
		return ret;
	}
};

int main() {
	Solution s;
	cout << s.countNumbersWithUniqueDigits(2) << endl;
	cout << s.countNumbersWithUniqueDigits(3) << endl;
	return 0;
}
