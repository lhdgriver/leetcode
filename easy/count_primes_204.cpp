class Solution {
public:
	int countPrimes(int n) {
		vector<int> is_prime(n, 1);
		int prime_num = 0;
		for(int i = 2; i < n; i++) {
			if (is_prime[i] == 0) continue;
			prime_num++;
			for(int j = 2*i; j < n; j += i)
				is_prime[j] = 0;
		}

		return prime_num;
	}
};
