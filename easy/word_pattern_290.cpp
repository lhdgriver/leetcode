class Solution {
public:
	bool wordPattern(string pattern, string str) {
		unordered_map<char, string> w_str_map;
		vector<string> str_vec = split_str(str);
		if (pattern.length() != str_vec.size()) return false;

		set<string> occur_set;

		for (int i = 0; i < pattern.size(); i++) {
			if (w_str_map.find(pattern[i]) == w_str_map.end()) {
				w_str_map[pattern[i]] = str_vec[i];
				if (occur_set.find(str_vec[i]) != occur_set.end())
					return false;
				occur_set.insert(str_vec[i]);
			} else {
				if (w_str_map[pattern[i]] != str_vec[i])
					return false;
			}
		}

		return true;
	}
private:
	vector<string> split_str(string str) {
		vector<string> ret;

		int last_index = 0;
		for(int i = 0; i < str.length(); i++) {
			if (str[i] == ' ') {
				ret.push_back(str.substr(last_index, i-last_index));
				last_index = i+1;
			}
		}
		ret.push_back(str.substr(last_index, str.length()-last_index));
		return ret;
	}
};
