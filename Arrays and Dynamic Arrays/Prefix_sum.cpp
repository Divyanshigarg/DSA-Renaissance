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

	int queries;
	cin >> queries;

	// find the prefix sum of whole array
	for (int i = 1; i < n; ++i)
	{
		v[i] += v[i - 1];
	}

	while (queries--) {

		int l, r;
		cin >> l >> r;

		int sum;
		if (l == 0) {
			sum = v[r];
		}
		else {
			sum = v[r] - v[l - 1];
		}

		cout << "sum of " << queries << " " << sum << endl;
	}
	return 0;
}
