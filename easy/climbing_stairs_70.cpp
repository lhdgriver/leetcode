class Solution {
public:
	int climbStairs(int n) {
		if (n == 1) return 1;
		if (n == 2) return 2;
		int prev_2 = 1, prev_1 = 2;
		int now = 0;
		for (int i = 3; i <= n; i++) {
			now = prev_1 + prev_2;
			prev_2 = prev_1;
			prev_1 = now;
		}

		return now;
	}
};
