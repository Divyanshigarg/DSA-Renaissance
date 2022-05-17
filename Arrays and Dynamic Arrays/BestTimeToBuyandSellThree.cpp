#include<bits/stdc++.h>
using namespace std;
int main() {

	int n;
	cin >> n;

	int price[n + 1];
	for (int i = 0; i < n; ++i)
	{
		cin >> price[i];
	}

	int pmin[n + 1], prefix_profit[n + 1];

	// Compute prefix min array;
	pmin[0] = price[0];
	for (int i = 1; i < n; i++) {
		pmin[i] = min(pmin[i - 1], price[i]);
	}

	// Comput the prefix profit array;
	prefix_profit[0] = 0;
	for (int i = 1; i < n; ++i)
	{
		int new_profit = price[i] - pmin[i - 1];
		prefix_profit[i] = max(prefix_profit[i - 1], new_profit);
	}

	int smax[n + 1], suffix_profit[n + 1];
	// Compute the suffix max;
	smax[n - 1] = price[n - 1];
	for (int i = n - 2; i >= 0; i--) {
		smax[i] = max(smax[i + 1], price[i]);
	}

	// Compute suffix profit array
	suffix_profit[n - 1] = 0;
	for (int i = n - 2; i >= 0; i--) {
		int new_profit = smax[i + 1] - price[i];
		suffix_profit[i] = max(suffix_profit[i + 1], new_profit);
	}

	int profit  = suffix_profit[0];
	for (int i = 1; i < n; ++i)
	{
		int profit_with_two_transactions = prefix_profit[i - 1] + suffix_profit[i];
		profit = max(profit, profit_with_two_transactions);
	}

	cout << profit << endl;
}
