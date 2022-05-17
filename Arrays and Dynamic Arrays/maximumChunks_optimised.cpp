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

	// calculate prefix max with count;
	int c_max = INT_MIN;
	int ans = 0;
	for (int i = 0; i < n; i++) {

		c_max = max(c_max, v[i]);
		if (c_max == i) {
			ans++;
		}
	}
	cout << ans << endl;
}