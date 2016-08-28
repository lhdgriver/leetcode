class Solution {
public:
	int maxProfit(vector<int>& prices) {
		int profit = 0;
		for(int i = 0; i < prices.size(); i++) {
			if (i == 0) continue;
			if (prices[i] > prices[i-1]) {
				profit += prices[i] - prices[i-1];
			}
		}

		return profit;
	}
};
