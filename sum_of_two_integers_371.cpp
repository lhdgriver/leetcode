#include<iostream>
using namespace std;


class Solution {
public:
	int getSum(int a, int b) {
		int carry = (a & b) << 1;
		int remain = a ^ b;
		while(carry != 0) {
			int tmp = remain;
			remain = remain ^ carry;
			carry = (tmp & carry) << 1;
		}
		return remain;
	}
};


int main()
{
	Solution s;
	cout << s.getSum(1, 2) << endl;
	cout << s.getSum(5, 3) << endl;
	cout << s.getSum(-5, 3) << endl;
	return 0;
}
