class Solution {
public:
	vector<int> twoSum(vector<int>& numbers, int target) {
		int start = 0, end = numbers.size() - 1;
		vector<int> ret;
		while(start < end) {
			int sum = numbers[start] + numbers[end];
			if (sum == target) {
				ret.push_back(start+1);
				ret.push_back(end+1);
				return ret;
			} else if (sum < target) {
				start++;
				continue;
			} else {
				end--;
				continue;
			}
		}

		return ret;
	}
};
