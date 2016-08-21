class Solution {
public:
	vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
		vector<int> ret;

		set<int> s1 = get_set(nums1);
		set<int> s2 = get_set(nums2);
		for(set<int>::iterator it=s1.begin(); it!=s1.end(); it++) {
			if (s2.find(*it) != s2.end())
				ret.push_back(*it);
		}
		return ret;
	}
private:
	set<int> get_set(vector<int>& nums) {
		set<int> ret;
		for(int i=0; i<nums.size(); i++)
			ret.insert(nums[i]);

		return ret;
	}
};
