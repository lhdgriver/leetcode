class Solution {
public:
	bool containsNearbyDuplicate(vector<int>& nums, int k) {
		unordered_map<int, int> pos_map;
		for(int i = 0; i < nums.size(); i++) {
			if (pos_map.find(nums[i]) == pos_map.end()) {
				pos_map[nums[i]] = i;
				continue;
			}
			if (i - pos_map[nums[i]] <= k) return true;
			pos_map[nums[i]] = i;
		}

		return false;
	}
};
