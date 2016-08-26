class Solution {
public:
	string convertToTitle(int n) {
		string ret;
		while(n) {
			int remain = n % 26;
			ret = get_title(remain) + ret;
			n = (n-1) / 26;
		}
		return ret;
	}
private:
	char get_title(int n) {
		if (n == 0) return 'Z';
		return 'A' + n - 1;
	}
};
