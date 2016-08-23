class Solution {
public:
	int rob(vector<int>& nums) {
		if (nums.size() == 0) return 0;
		if (nums.size() == 1) return nums[0];
		if (nums.size() == 2) return max(nums[0], nums[1]);
		int max_profit = 0;
		int prev_2 = nums[0];
		int prev_1 = max(nums[0], nums[1]);
		for(int i = 2; i < nums.size(); i++) {
			int now = max(nums[i] + prev_2, prev_1);
			if (now > max_profit) max_profit = now;
			prev_2 = prev_1;
			prev_1 = now;
		}

		return max_profit;
	}
};
