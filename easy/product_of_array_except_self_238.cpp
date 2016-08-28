class Solution {
public:
	vector<int> productExceptSelf(vector<int>& nums) {
		vector<int> ret(nums.size(), 1);
		int prod = 1;
		for(int i = 0; i < nums.size(); i++) {
			if (i == 0) {
				prod = nums[i];
				ret[i] = 1;
				continue;
			}
			ret[i] = prod;
			prod *= nums[i];
		}

		prod = 1;
		for(int i = nums.size()-1; i >= 0; i--) {
			if (i == nums.size()-1) {
				prod = nums[i];
				continue;
			}
			ret[i] *= prod;
			prod *= nums[i];
		}

		return ret;
	}
};
