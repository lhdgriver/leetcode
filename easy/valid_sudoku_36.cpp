#include<iostream>
#include<vector>
#include<set>

using namespace std;


class Solution {
public:
	bool isValidSudoku(vector<vector<char> >& board) {
		/*
		cout << checkRow(board) << endl;
		cout << checkCol(board) << endl;
		cout << checkDiagram(board) << endl;
		cout << checkBlock(board) << endl;
		*/
		if (!checkRow(board)) return false;
		if (!checkCol(board)) return false;
		//if (!checkDiagram(board)) return false;
		if (!checkBlock(board)) return false;
		return true;
	}
private:
	bool check_nine(vector<char> & vec) {
		set<char> s;
		for(int i = 0; i < vec.size(); i++) {
			if (vec[i] == '.') continue;
			if (s.find(vec[i]) != s.end()) return false;
			s.insert(vec[i]);
		}

		return true;

	}

	bool checkRow(vector<vector<char> >& board) {
		for (int i = 0; i <= 8; i++) {
			vector<char> nine;
			for (int j = 0; j <= 8; j++) {
				nine.push_back(board[i][j]);
			}
			if (!check_nine(nine)) return false;
		}
		return true;
	}

	bool checkCol(vector<vector<char> >& board){
		for (int i = 0; i <= 8; i++) {
			vector<char> nine;
			for (int j = 0; j <= 8; j++) {
				nine.push_back(board[j][i]);
			}
			if (!check_nine(nine)) return false;
		}
		return true;
	}

	bool checkDiagram(vector<vector<char> >& board) {
		vector<char> nine;
		for (int i = 0; i <= 8; i++) {
			nine.push_back(board[i][i]);
		}
		if (!check_nine(nine)) return false;
		nine.clear();
		for (int i = 0; i <= 8; i++) {
			nine.push_back(board[i][8-i]);
			cout << board[i][8-i];
		}
		if (!check_nine(nine)) return false;
		return true;
	}

	bool checkBlock(vector<vector<char> >& board) {
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				vector<char> nine;
				for (int row = i*3; row < i*3+3; row++) {
					for (int col = j*3; col < j*3+3; col++)
						nine.push_back(board[row][col]);
				}
				if (!check_nine(nine)) return false;
			}
		}
		return true;
	}
};

int main() {
	vector<vector<char> > board;
	vector<char> v;
	v.push_back('.');
	v.push_back('.');
	v.push_back('.');
	v.push_back('.');
	v.push_back('.');
	v.push_back('.');
	v.push_back('.');
	v.push_back('.');
	v.push_back('2');
	board.push_back(v);
	v.clear();
	v.push_back('.');
	v.push_back('.');
	v.push_back('.');
	v.push_back('.');
	v.push_back('.');
	v.push_back('.');
	v.push_back('6');
	v.push_back('.');
	v.push_back('.');
	board.push_back(v);
	v.clear();
	v.push_back('.');
	v.push_back('.');
	v.push_back('1');
	v.push_back('4');
	v.push_back('.');
	v.push_back('.');
	v.push_back('8');
	v.push_back('.');
	v.push_back('.');
	board.push_back(v);
	v.clear();
	v.push_back('.');
	v.push_back('.');
	v.push_back('.');
	v.push_back('.');
	v.push_back('.');
	v.push_back('.');
	v.push_back('.');
	v.push_back('.');
	v.push_back('.');
	board.push_back(v);
	v.clear();
	v.push_back('.');
	v.push_back('.');
	v.push_back('.');
	v.push_back('.');
	v.push_back('.');
	v.push_back('.');
	v.push_back('.');
	v.push_back('.');
	v.push_back('.');
	board.push_back(v);
	v.clear();
	v.push_back('.');
	v.push_back('.');
	v.push_back('.');
	v.push_back('.');
	v.push_back('3');
	v.push_back('.');
	v.push_back('.');
	v.push_back('.');
	v.push_back('.');
	board.push_back(v);
	v.clear();
	v.push_back('5');
	v.push_back('.');
	v.push_back('8');
	v.push_back('6');
	v.push_back('.');
	v.push_back('.');
	v.push_back('.');
	v.push_back('.');
	v.push_back('.');
	board.push_back(v);
	v.clear();
	v.push_back('.');
	v.push_back('9');
	v.push_back('.');
	v.push_back('.');
	v.push_back('.');
	v.push_back('.');
	v.push_back('4');
	v.push_back('.');
	v.push_back('.');
	board.push_back(v);
	v.clear();
	v.push_back('.');
	v.push_back('.');
	v.push_back('.');
	v.push_back('.');
	v.push_back('5');
	v.push_back('.');
	v.push_back('.');
	v.push_back('.');
	v.push_back('.');
	board.push_back(v);
	v.clear();

	Solution s;
	cout << s.isValidSudoku(board) << endl;
	
	return 0;
}
