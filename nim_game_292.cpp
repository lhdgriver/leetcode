#include<iostream>
using namespace std;


class Solution {
public:
	bool canWinNim(int n) {
		if (n % 4 == 0) return false;

		return true;
	}
};

int main()
{

	Solution s;
	cout << s.canWinNim(0) << endl;
	cout << s.canWinNim(4) << endl;
	cout << s.canWinNim(5) << endl;
	return 0;
}
