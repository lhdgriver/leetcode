class Solution {
public:
	bool containsDuplicate(vector<int>& nums) {
		set<int> occur_set;
		for(int i = 0; i < nums.size(); i++) {
			if (occur_set.find(nums[i]) != occur_set.end())
				return true;
			occur_set.insert(nums[i]);
		}
		return false;
	}
};
