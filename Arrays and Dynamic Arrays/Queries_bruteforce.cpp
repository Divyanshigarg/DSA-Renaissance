#include<bits/stdc++.h>
using namespace std;
// We can also use Prefix sum to solve this problem

int main() {

	int n, m;
	cin >> n >> m;

	int t;
	cin >> t;

	int arr[100][100];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> arr[i][j];
		}
	}


	while (t--) {

		int i1, j1, i2, j2;
		cin >> i1 >> j1 >> i2 >> j2;
		int sum = 0;
		for (int i = i1; i <= i2; i++) {
			for (int j = j1; j <= j2; j++) {
				sum += arr[i][j];
			}
		}
		cout << sum << endl;
	}
	return 0;
}