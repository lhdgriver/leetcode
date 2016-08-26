class Solution {
public:
	void rotate(vector<int>& nums, int k) {
		k = k % nums.size();
		vec_swap(nums, nums.size() - k, nums.size() - 1);
		vec_swap(nums, 0, nums.size() - k - 1);
		vec_swap(nums, 0, nums.size() - 1);
	}
private:
	void vec_swap(vector<int>& nums, int start, int end) {
		while(start < end) {
			swap(nums[start], nums[end]);
			start++;
			end--;
		}
	}
};
