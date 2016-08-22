#include<iostream>
#include<set>
using namespace std;


class Solution {
public:
	bool isHappy(int n) {
		set<int> occur_set;
		while(n != 1) {
			if (occur_set.find(n) != occur_set.end())
				return false;
			occur_set.insert(n);
			n = calcu(n);
		}
		return true;
	}
private:
	int calcu(int n){
		int sum = 0;
		while(n) {
			int t = n % 10;
			sum += t*t;
			n /= 10;
		}
		return sum;
	}
};

int main() {
	Solution s;
	cout << s.isHappy(19) << endl;
	return 0;
}
