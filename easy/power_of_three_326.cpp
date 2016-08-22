class Solution {
public:
	bool isPowerOfThree(int n) {
		double lg3 = log(n) / log(3);
		return abs(lg3 - round(lg3)) < 0.00000000001;
	}
};
