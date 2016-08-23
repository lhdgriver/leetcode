class Solution{
public:
	bool isPalindrome(int x) {
		if (x < 0) return false;
		int len = int(log10(x));
		int diver = int(pow(10, len));
		while(x) {
			int first = x / diver;
			int remain = x % 10;
			if (first != remain) return false;
			x = x - first * diver;
			x /= 10;
			diver /= 100;
		}

		return true;
	}
};
