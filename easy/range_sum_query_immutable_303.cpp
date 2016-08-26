class NumArray {
public:
	NumArray(vector<int> &nums) {
		int sum = 0;
		for(int i = 0; i < nums.size(); i++) {
			sum += nums[i];
			sum_vec.push_back(sum);
		}
	}

	int sumRange(int i, int j) {
		if (i == 0) return sum_vec[j];
		return sum_vec[j] - sum_vec[i-1];
	}
private:
	vector<int> sum_vec;
};
