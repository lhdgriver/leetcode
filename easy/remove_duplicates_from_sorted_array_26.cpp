class Solution {
public:
	int removeDuplicates(vector<int>& nums) {
		if (nums.size() == 0) return 0;
		if (nums.size() == 1) return 1;
		int count = 1;
		int prev = nums[0];
		for(int i = 1; i < nums.size(); i++) {
			if (nums[i] == prev) continue;
			nums[count] = nums[i];
			prev = nums[i];
			count++;
		}

		return count;
	}
};
