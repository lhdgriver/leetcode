class Solution {
public:
	int integerBreak(int n) {
		if (n == 2) return 1;
		if (n == 3) return 2;

		if (n % 3 == 0) {
			return pow_of_3(n/3);
		}
		if (n % 3 == 1) {
			return 4 * pow_of_3(n/3-1);
		}
		if (n % 3 == 2) {
			return 2 * pow_of_3(n/3);
		}

		return 0;
	}
private:
	int pow_of_3(int n) {
		if (n == 0) return 1;
		int ret = 1;
		while(n--) ret *= 3;

		return ret;
	}
};
