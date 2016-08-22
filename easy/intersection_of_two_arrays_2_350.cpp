class Solution {
public:
	vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
		vector<int> ret;
		unordered_map<int, int> cnt_map_1 = get_count_map(nums1);
		unordered_map<int, int> cnt_map_2 = get_count_map(nums2);
		for(unordered_map<int, int>::iterator it = cnt_map_1.begin(); it != cnt_map_1.end(); it++) {
			if (cnt_map_2.find(it->first) == cnt_map_2.end())
				continue;
			int count = min(it->second, cnt_map_2[it->first]);
			while(count--) {
				ret.push_back(it->first);
			}
		}
		return ret;
	}
private:
	unordered_map<int, int> get_count_map(vector<int>& nums) {
		unordered_map<int, int> count_map;
		for(int i = 0; i < nums.size(); i++) {
			if (count_map.find(nums[i]) == count_map.end())
				count_map[nums[i]] = 0;
			count_map[nums[i]]++;	
		}
		return count_map;
	}
};
