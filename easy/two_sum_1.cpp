class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		unordered_map<int, int> num_pos_map;
		vector<int> ret;
		for(int i = 0; i < nums.size(); i++) {
			if (num_pos_map.find(target-nums[i]) != num_pos_map.end()) {
				ret.push_back(num_pos_map[target-nums[i]]);
				ret.push_back(i);
				return ret;
			}
			num_pos_map[nums[i]] = i;
		}

		return ret;
	}
};
