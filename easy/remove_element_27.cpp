class Solution {
public:
	int removeElement(vector<int>& nums, int val) {
		int left = 0, right = nums.size() - 1;
		while(left <= right) {
			while(nums[left] != val && left <= right)
				left++;
			while(nums[right] == val && left <= right)
				right--;
			if (left < right) {
				swap(nums[left], nums[right]);
				left++;
				right--;
			} else break;
		}
		return left;
	}
};
