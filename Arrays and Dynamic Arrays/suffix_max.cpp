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

	for (int i = n - 2; i >= 0 ; --i) {
		v[i] = max(v[i + 1], v[i]);
	}

	int queries;
	cin >> queries;

	while (queries--) {
		int idx;
		cin >> idx;

		cout << v[idx] << endl;
	}
	return 0;
}