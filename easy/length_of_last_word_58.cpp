class Solution {
public:
	int lengthOfLastWord(string s) {
		if (s == "") return 0;
		int word_length = 0;
		int end = s.length() - 1;
		while(end >=0 && s[end] == ' ') {
			end--;
		}
		for(int i = 0; i <= end; i++) {
			if (s[i] == ' ') {
				word_length = 0;
				continue;
			}
			word_length++;
		}

		return word_length;
	}
};
