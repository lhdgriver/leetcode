bool isBadVersion(int version);

class Solution {
public:
	int firstBadVersion(int n) {
		int start = 1, end = n, mid;
		while(start <= end) {
			mid = start + (end - start)/2;
			if (isBadVersion(mid)) {
				if (mid == 1) return 1;
				if (!isBadVersion(mid-1))
					return mid;
				else
					end = mid - 1;
				continue;
			} else {
				start = mid + 1;
				continue;
			}
		}

		return 0;
	}
};
