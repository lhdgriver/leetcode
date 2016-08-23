class Solution {
public:
	bool isPowerOfFour(int num) {
		double lg4 = log(num) / log(4);
		return abs(lg4 - round(lg4)) < 0.00000000001;
	}
};
