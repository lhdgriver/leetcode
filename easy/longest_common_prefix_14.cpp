class Solution {
public:
	string longestCommonPrefix(vector<string>& strs) {
		if (strs.size() == 0) return "";
		string ret = "";
		int index = 0;
		while(true) {
			char common_char;
			for(int i = 0; i < strs.size(); i++) {
				if (index >= strs[i].size()) return ret;
				if (i == 0) {
					common_char = strs[i][index];
					continue;
				}
				if (common_char != strs[i][index]) return ret;
			}
			index++;
			ret = ret + common_char;
		}
		return ret;
	}
};
