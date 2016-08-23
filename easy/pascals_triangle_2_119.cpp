class Solution {
public:
	vector<int> getRow(int rowIndex) {
		vector<int> ret;
		ret.push_back(1);
		if (rowIndex == 0) {
			return ret;
		}
		ret.push_back(1);
		if (rowIndex == 1) {
			return ret;
		}
		for(int row = 2; row <= rowIndex; row++) {
			for(int col = row - 1; col > 0; col-- {
				ret[col] += ret[col-1];
			}
			ret.push_back(1);
		}

		return ret;
	}
};
