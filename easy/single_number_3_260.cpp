#include<iostream>
#include<vector>
using namespace std;


class Solution {
public:
	vector<int> singleNumber(vector<int>& nums) {
		int xor_result = 0;
		for(int i = 0; i < nums.size(); i++)
			xor_result ^= nums[i];
		int mask = 1;
		while((xor_result & mask) == 0) {
			mask = mask << 1;
		}
		int a = 0, b = 0;
		for(int i = 0; i < nums.size(); i++) {
			if (nums[i] & mask) {
				a ^= nums[i];
			} else {
				b ^= nums[i];
			}
		}

		vector<int> ret;
		ret.push_back(a);
		ret.push_back(b);

		return ret;
	}
};

int main() {
	Solution s;
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(1);
	v.push_back(3);
	v.push_back(2);
	v.push_back(5);
	vector<int> ret = s.singleNumber(v);
	for(int i = 0; i < ret.size(); i++) {
		cout << ret[i] << endl;
	}
	return 0;
}
