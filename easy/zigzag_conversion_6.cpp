class Solution {
public:
	string convert(string s, int numRows) {
		vector<vector<char>> col_vec;
		string ret;
		for(int i = 0; i < numRows; i++) {
			vector<char> tmp;
			col_vec.push_back(tmp);
		}
		int row_num = 0;
		int direct = 1;
		for(int i = 0; i < s.length(); i++) {
			col_vec[row_num].push_back(s[i]);
			if (numRows == 1)
				direct = 0;
			else if (row_num == 0)
				direct = 1;
			else if (row_num == numRows - 1)
				direct = -1;
			row_num += direct;
		}

		for(int i = 0; i < numRows; i++) {
			for(int j = 0; j < col_vec[i].size(); j++)
				ret = ret + col_vec[i][j];
		}

		return ret;
	}
};
