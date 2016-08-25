int guess(int num);

class Solution {
public:
	int guessNumber(int n) {
		int start = 1, end = n;
		while(start <= end) {
			int mid = start + (end-start) / 2;
			if (guess(mid) == 0) return mid;
			if (guess(mid) == -1) {
				end = mid - 1;
				continue;
			}
			if (guess(mid) == 1) {
				start = mid + 1;
				continue;
			}
		}
		return -1;
	}
};
