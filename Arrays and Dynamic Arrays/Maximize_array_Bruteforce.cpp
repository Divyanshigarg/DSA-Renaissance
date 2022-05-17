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

	int maximum = INT_MIN;

	for (int i = 0; i < n - 2; ++i) {
		for (int j = i + 1; j < n - 1; ++j) {
			for (int k = j + 1; k < n; ++k) {
				maximum = max(p * v[i] + q * v[j] + r * v[k], maximum);
			}
		}
	}
	cout << "Max " << maximum << endl;
	return 0;
}
