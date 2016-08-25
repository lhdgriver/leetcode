class Solution {
public:
	string countAndSay(int n) {
		if (n == 1) return "1";
		string prev_say = "1";
		string now_say = "";
		for(int turn = 2; turn <= n; turn++) {
			char prev_char;
			int prev_count = 0;
			for(int i = 0; i < prev_say.length(); i++) {
				if (i == 0) {
					prev_char = prev_say[i];
					prev_count = 1;
					continue;
				}

				if (prev_say[i] == prev_char) {
					prev_count++;
					continue;
				} else {
					now_say += to_string(prev_count) + prev_char;
					prev_char = prev_say[i];
					prev_count = 1;
					continue;
				}
			}
			now_say += to_string(prev_count) + prev_char;
			prev_say = now_say;
			now_say = "";
		}

		return prev_say;
	}
};
