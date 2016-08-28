#include<iostream>
#include<vector>
using namespace std;


class Solution {
public:
	vector<int> countBits(int num) {
		vector<int> ret;
		ret.push_back(0);
		if (num == 0)
			return ret;
		ret.push_back(1);
		if (num == 1)
			return ret;

		int num_of_one = 2;
		int start_pow_of_2 = 2;
		int end_pow_of_2 = 4;
		while(start_pow_of_2 <= num) {
			for(int i = start_pow_of_2; i < end_pow_of_2; i++) {
				if (i > num) break;
				int tmp = num_of_one - ret[end_pow_of_2-1-i];
				ret.push_back(tmp);
			}
			num_of_one++;
			start_pow_of_2 = end_pow_of_2;
			end_pow_of_2 = end_pow_of_2 * 2;
		}

		return ret;
	}
};

int main() {
	Solution s;
	vector<int> ret = s.countBits(10);
	for(int i = 0; i < ret.size(); i++)
		cout << ret[i] << endl;
	return 0;
}
