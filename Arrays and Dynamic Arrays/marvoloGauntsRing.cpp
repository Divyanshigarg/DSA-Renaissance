#include<bits/stdc++.h>
using namespace std;
int main() {

	int n;
	cin >> n;

	long long signed int p, q, r;
	cin >> p >> q >> r;

	vector<long long int> v;
	for (int i = 0; i < n; ++i)
	{
		int x;
		cin >> x;
		v.push_back(x);
	}


	vector<long long int> prefix;
	vector<long long int> suffix;

	for (int i = 0; i < v.size(); ++i)
	{
		prefix.push_back(v[i]*p);
		suffix.push_back(v[i]*r);
	}

	// Perform prefix operation
	for (int i = 1; i < n; i++) {
		prefix[i] = max(prefix[i - 1], prefix[i]);
	}

	// Perform suffix operation
	for (int i = n - 2; i >= 0; i--) {
		suffix[i] = max(suffix[i + 1], suffix[i]);
	}

	long long int ans = LLONG_MIN;
	for (int i = 0; i < n; i++) {

		ans = max((prefix[i]) + (v[i] * q) + (suffix[i]), ans);
	}

	cout << ans << endl;
}