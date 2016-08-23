class Solution {
public:
	vector<vector<int>> generate(int numRows) {
		vector<int> now;
		vector<vector<int>> prev_result;
		if (numRows == 0) {
			return prev_result;
		}
		if (numRows == 1){
			now.push_back(1);
			prev_result.push_back(now);
			return prev_result;
		}
		prev_result = generate(numRows-1);
		vector<int> prev = prev_result[prev_result.size()-1];
		for(int i = 0; i < prev.size(); i++) {
			if (i==0) {
				now.push_back(1);
				continue;
			}
			now.push_back(prev[i-1] + prev[i]);
		}
		now.push_back(1);
		prev_result.push_back(now);
		return prev_result;
	}
};
