class Solution {
public:
	int singleNumber(vector<int>& nums) {
		int digits[32];
		memset(digits, 0, sizeof(digits));
		for(int i = 0; i < nums.size(); i++) {
			for(int j = 0; j < 32; j++) {
				digits[j] = (digits[j] + (nums[i] >> j & 1)) % 3;
			}
		}
		int ret = 0, carry = 1;
		for(int i = 0; i < 32; i++) {
			if (digits[i] != 0) {
				ret += carry;
			}
			carry = carry << 1;
		}

		return ret;
	}
};
