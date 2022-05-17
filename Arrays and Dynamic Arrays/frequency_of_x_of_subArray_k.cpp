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

	int k, x;
	cin >> k >> x;

	int frequency = 0;

	for (int i = 0; i <= k - 1; i++) {
		if (v[i] == x) {
			frequency++;
		}
	}

	for (int j = k; j <= n - 1; j++) {

		cout << frequency << endl;

		if (v[j - k] == x) {
			frequency--;
		}

		if (v[j] == x) {
			frequency++;
		}
	}

	cout << frequency << endl;

	return 0;
}