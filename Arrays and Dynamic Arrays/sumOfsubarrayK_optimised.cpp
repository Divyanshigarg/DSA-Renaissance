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

	int k;
	cin >> k;

	int ans = 0;

	for (int i = 0; i <= k - 1; i++) {
		ans += v[i];
	}

	for (int j = k; j <= n - 1; j++) {
		cout << ans << endl;

		ans += v[j];

		ans -= v[j - k];
	}

	cout << ans << endl;
	return 0;
}