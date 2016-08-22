class Solution {
public:
	int firstUniqChar(string s) {
		unordered_map<char, int> count_map;
		for(int i = 0; i < s.length(); i++) {
			if (count_map.find(s[i]) == count_map.end())
				count_map[s[i]] = 0;
			count_map[s[i]]++;
		}
		for(int i = 0; i < s.length(); i++) {
			if (count_map[s[i]] == 1)
				return i;
		}
		return -1;
	}
};
