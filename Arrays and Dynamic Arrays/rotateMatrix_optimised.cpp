#include<bits/stdc++.h>
void reverse(int *arr, int n) {
	int j = n - 1;
	for (int i = 0; i < j ; i++) {
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
		j--;
	}
}
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
	// Find the transpose of the matrix;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			swap(arr[i][j], arr[j][i]);
		}
	}

	// Reverse each row;
	for (int i = 0; i < n; i++) {
		reverse(arr[i], n);
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}