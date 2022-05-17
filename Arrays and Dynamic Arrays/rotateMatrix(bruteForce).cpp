// Note in this approach we are using an extra 2D array
#include<bits/stdc++.h>
using namespace std;
int main() {

	int n;
	cin >> n;

	int arr[100][100];
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j) {
			cin >> arr[i][j];
		}
	}

	int new_mat[100][100];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; ++j) {
			new_mat[j][n - i - 1] = arr[i][j];
		}
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j) {
			cout << new_mat[i][j] << " ";
		}
		cout << endl;
	}
}