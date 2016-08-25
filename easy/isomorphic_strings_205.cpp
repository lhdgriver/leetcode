class Solution {
public:
	bool isIsomorphic(string s, string t) {
		set<char> distinct_t;
		unordered_map<char, char> m;
		for(int i = 0; i < s.length(); i++) {
			if (m.find(s[i]) == m.end()) {
				if (distinct_t.find(t[i]) != distinct_t.end())
					return false;
				distinct_t.insert(t[i]);
				m[s[i]] = t[i];
			} else {
				if (m[s[i]] != t[i]) return false;
			}
		}

		return true;
	}
};
