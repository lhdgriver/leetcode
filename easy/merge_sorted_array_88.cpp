class Solution {
public:
	void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
		int index_1 = m - 1;
		int index_2 = n - 1;
		for(int i = m + n - 1; i >= 0; i--) {
			if (index_1 < 0) {
				nums1[i] = nums2[index_2--];
				continue;
			}
			if (index_2 < 0) {
				nums1[i] = nums1[index_1--];
				continue;
			}

			if (nums1[index_1] < nums2[index_2]) {
				nums1[i] = nums1[index_1--];
				continue;
			} else {
				nums1[i] = nums2[index_2--];
				continue;
			}
		}
	}
};
