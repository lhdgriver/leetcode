class Solution {
public:
	int titleToNumber(string s) {
		int carry = 1;
		int sum = 0;
		for(int i=s.length()-1; i>=0; i--){
			sum += carry * get_num(s[i]);
			carry *= 26;
		}
		return sum;
	}
private:
	int get_num(char c){
		return c-'A'+1;
	}
};
