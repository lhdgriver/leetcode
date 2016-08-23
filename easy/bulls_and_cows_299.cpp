class Solution {
public:
	string getHint(string secret, string guess) {
		int same_num = 0;
		int diff_num = 0;
		unordered_map<char, int> a_count_map;
		unordered_map<char, int> b_count_map;
		for(int i = 0; i < secret.length(); i++) {
			if (secret[i] == guess[i])
				same_num++;
			else {
				if (a_count_map.find(secret[i]) == a_count_map.end())
					a_count_map[secret[i]] = 0;
				a_count_map[secret[i]]++;

				if (b_count_map.find(guess[i]) == b_count_map.end())
					b_count_map[guess[i]] = 0;
				b_count_map[guess[i]]++;
			}
		}
		for(unordered_map<char, int>::iterator it = a_count_map.begin(); it != a_count_map.end(); it++) {
			if (b_count_map.find(it->first) != b_count_map.end()) {
				diff_num += min(it->second, b_count_map[it->first]);
			}
		}

		string ret;
		ret = to_string(same_num) + "A" + to_string(diff_num) + "B";

		return ret;
	}
};
