#include<bits/stdc++.h>
using namespace std;
void outputArr(int arr[][100], int n, int m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}
int main() {

	int n, m;
	cin >> n >> m;

	// Take input;
	int arr[100][100];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> arr[i][j];
		}
	}
	//Input the number of queries;
	int t;
	cin >> t;


	while (t--) {
		//Input the coordinates
		int i1, j1, i2, j2;
		cin >> i1 >> j1 >> i2 >> j2;

		// Perform prefix sum of each row;
		for (int i = 0; i < n; i++) {
			int sum = 0;
			for (int j = 0; j < m; j++) {
				sum += arr[i][j];
				arr[i][j] = sum;
			}
		}

		// Perform prefix sum of each column;
		for (int j = 0; j < m; j++) {
			int sum = 0;
			for (int i = 0; i < n; i++) {
				sum += arr[i][j];
				arr[i][j] = sum;
			}
		}
		// outputArr(arr, n, m);
		int ans = arr[i2][j2];


		if (j1 - 1 >= 0 ) {
			// Subtracting the left part if it exists;
			ans = ans - arr[i2][j1 - 1];
		}

		if (i1 - 1 >= 0) {
			// Subtracting the upper part if it exists;
			ans = ans - arr[i1 - 1][j2];
		}
		if (i1 - 1 >= 0 && j1 - 1 >= 0 ) {
			// Subtracting twice will remove required sum;
			ans = ans + arr[i1 - 1][j1 - 1];
		}
		cout << ans << endl;
	}
	return 0;
}