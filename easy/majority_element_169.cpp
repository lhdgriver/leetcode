class Solution {
public:
	int majorityElement(vector<int>& nums) {
		unordered_map<int, int> count_map;
		for(int i = 0; i < nums.size(); i++) {
			if (count_map.find(nums[i]) == count_map.end())
				count_map[nums[i]] = 0;
			count_map[nums[i]]++;
		}
		for(unordered_map<int, int>::iterator it = count_map.begin(); it != count_map.end(); it++) {
			if (it->second > nums.size()/2) return it->first;
		}

		return 0;
	}
};
