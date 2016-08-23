class Solution {
public:
	vector<int> plusOne(vector<int>& digits) {
		vector<int> ret;
		int carry = 1;
		for(int i = digits.size() - 1; i >= 0; i--) {
			ret.push_back((carry + digits[i]) % 10);
			carry = (carry + digits[i]) / 10;
		}
		if (carry == 1)
			ret.push_back(1);
		std::reverse(ret.begin(), ret.end());
		return ret;
	}
};
