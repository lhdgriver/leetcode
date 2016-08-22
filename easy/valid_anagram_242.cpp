class Solution {
public:
	bool isAnagram(string s, string t) {
		if (s.length() != t.length()) return false;
		unordered_map<char, int> count_map = get_count_map(s);
		for(int i=0; i<t.length(); i++) {
			if (count_map.find(t[i]) == count_map.end()) return false;
			if (count_map[t[i]] == 0) return false;
			count_map[t[i]]--;
		}
		return true;
	}
private:
	unordered_map<char, int> get_count_map(string s) {
		unordered_map<char, int> count_map;
		for(int i=0; i<s.length(); i++){
			if (count_map.find(s[i]) == count_map.end())
				count_map[s[i]] = 0;
			count_map[s[i]]++;
		}
		return count_map;
	}
};
