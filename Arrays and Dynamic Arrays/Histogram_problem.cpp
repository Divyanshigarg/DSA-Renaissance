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

	// Calculate prefix max;
	vector<int> prefix;
	for (int i = 0; i < n; ++i)
	{
		prefix.push_back(v[i]);
	}

	for (int i = 1; i < n; i++) {
		prefix[i] = max(prefix[i - 1], prefix[i]);
	}

	// Calculate suffix max;
	vector<int> suffix;
	for (int i = 0; i < n; ++i)
	{
		suffix.push_back(v[i]);
	}

	for (int i = n - 2; i >= 0; i--) {
		suffix[i] = max(suffix[i + 1], suffix[i]);
	}

	// calculate the histogram
	int amount = 0;
	for (int i = 1 ; i < n - 1; i++) {
		int h1 = prefix[i - 1];
		int h2 = suffix[i + 1];

		int deciding_height = min(h1, h2);

		if (deciding_height > v[i]) {
			amount += deciding_height - v[i];
		}
	}

	cout << " Total Height of water " << amount << endl;
	return 0;
}