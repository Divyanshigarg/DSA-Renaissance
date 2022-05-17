#include<bits/stdc++.h>
using namespace std;
bool canBeChunked(vector<int>& v, int i, int j) {
	int count = 0;
	for (int k = i; k <= j; k++) {
		if (v[k] >= i && v[k] <= j) {
			count++;
		}
	}
	if (count == j - i + 1) {
		return true;
	}
	return false;
}
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

	int i = 0;
	int ans = 0;
	int j;
	while (i < n) {

		for (j = i; j < n; j++) {
			if (canBeChunked(v, i, j)) {
				break;
			}
		}
		i = j + 1;
		ans += 1;
	}
	cout << ans << endl;
}