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

	int ans = 0;
	for (int i = 0; i < n; i++) {

		ans  += (i + 1) * (n - i) * v[i];
	}

	cout << ans << endl;
	return 0;

}