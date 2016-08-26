class Solution {
public:
	bool isPalindrome(string s) {
		int start = 0, end = s.length() - 1;
		while(start < end) {
			char start_c = get_char(s[start]);
			char end_c = get_char(s[end]);
			if (start_c == ' ') {
				start++;
				continue;
			}
			if (end_c == ' ') {
				end--;
				continue;
			}
			if (start_c != end_c) return false;
			start++;
			end--;
		}
		return true;
	}
private:
	/*全部转为小写, 非法字符全部转为空格*/
	char get_char(char c) {
		if (c >= 'A' && c <= 'Z')
			return 'a' + (c - 'A');
		if (c >= '0' && c <= '9')
			return c;
		if (c >= 'a' && c <= 'z')
			return c;
		return ' ';
	}
};
