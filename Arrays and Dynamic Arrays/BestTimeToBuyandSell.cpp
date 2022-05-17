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

	// copy the elements from v to suffix and prefix array;
	vector<int> prefix_min;
	vector<int> suffix_max;

	for (int i = 0; i < v.size(); i++) {
		prefix_min.push_back(v[i]);
		suffix_max.push_back(v[i]);
	}

	// perform prefix min;
	for (int i = 1; i < n; i++) {
		prefix_min[i] = min(prefix_min[i - 1], prefix_min[i]);
	}

	// perform suffix max;
	for (int i = n - 2; i >= 0; i--) {
		suffix_max[i] = max(suffix_max[i + 1], suffix_max[i]);
	}

	int profit = 0;

	for (int i = 0; i < n - 1; i++) {

		if (prefix_min[i] < suffix_max[i + 1]) {
			profit = max(suffix_max[i + 1] - prefix_min[i], profit);
		}
	}

	cout << profit << endl;
	return 0;
}
