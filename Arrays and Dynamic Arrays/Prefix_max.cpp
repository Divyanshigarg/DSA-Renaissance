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

	for (int i = 1; i < n; ++i)
	{
		v[i] = max(v[i - 1], v[i]);
	}

	int queries;
	cin >> queries;

	while (queries--) {
		int end_index;
		cin >> end_index;

		cout << v[end_index] << endl;
	}
	return 0;
}