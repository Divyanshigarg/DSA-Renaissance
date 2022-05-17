#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;

	vector<int> v;
	for (int i = 0; i < n; ++i)
	{
		int x;
		cin >> x;
		v.push_back(x);
	}

	int p, q, r;
	cin >> p >> q >> r;

	//Build the prefix array
	vector<int> prefix;

	// Initialise the elements
	for (int i = 0; i < n; ++i)
	{
		prefix.push_back(v[i]*p);
	}

	// Find the prefix max;
	for (int i = 1 ; i < n; ++i) {
		prefix[i] = max(prefix[i - 1], prefix[i]);
	}

	// Build the suffix array
	vector<int> suffix;

	// Initialise the elements
	for (int i = 0; i < n; ++i)
	{
		suffix.push_back(v[i]*r);
	}

	// find the suffix max;
	for (int i = n - 2 ; i >= 0 ; i --) {
		suffix[i] = max(suffix[i + 1], suffix[i]);
	}

	// find the middle element

	int ans = INT_MIN;
	for (int i = 1; i < n - 1; ++i) {
		ans = max(ans, prefix[i - 1] + (v[i] * q) + suffix[i + 1]);
	}

	cout << ans << endl;
	return 0;
}