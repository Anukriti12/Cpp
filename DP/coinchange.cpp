#include<bits/stdc++.h>


using namespace std;

const int inf = 1E7;

//top down

int dp[1000000] = {0};

int minCoins(vector<int>& coins, int n, int total) {
	if (total == 0) return 0;
	if (dp[total] != 0) return dp[total];

	int ans = 1e7;

	for (int i = 0; i < n; ++i) {
		int curCoin = coins[i];
		if (curCoin <= total) {
			int q1 = minCoins(coins, n, total - curCoin) + 1;
			ans = min(ans, q1);
		}
	}
	return dp[total] = ans;   // storing the min ans and returing it
}



//bottom up


int minCoins1(vector<int>& coins, int n, int total) {
	int* dp = new int[total + 10] {};

	for (int curTotal = 1; curTotal <= total; ++curTotal) {
		int best = inf;
		for (int i = 0; i < n; ++i) {
			int curCoin = coins[i];
			if (curCoin <= curTotal) {
				best = min(best, 1 + dp[curTotal - curCoin]);
			}
		}
		dp[curTotal] = best;
	}
	int ans = dp[total];
	delete [] dp;
	return ans;

}



int main() {

	int n;
	cin >> n;

	vector<int>denm(n);
	// denm.resize(n);

	for (int i = 0; i < n; i++)
		cin >> denm[i];


	int total;

	cin >> total;

	cout << minCoins(denm, n, total) << endl;
	cout << minCoins1(denm, n, total);

}

