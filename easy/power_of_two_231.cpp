class Solution {
public:
	bool isPowerOfTwo(int n) {
		double lg2 = log(n) / log(2);
		return abs(lg2 - round(lg2)) < 0.00000000001;
	}
};
