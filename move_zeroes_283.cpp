class Solution {
public:
	void moveZeroes(vector<int>& nums) {
		int put_non_zero_pos = 0;
		int index = 0;
		while(index < nums.size()){
			if (nums[index] != 0) {
				swap(nums[put_non_zero_pos], nums[index]);
				put_non_zero_pos++;
			}
			index++;
		}
	}
};
