#include<bits/stdc++.h>
using namespace std;
void transpose(int arr[][100], int n) {

	int counter = 0;
	int i = 0, j = 1;

	while (j < n) {
		counter = i;
		while (counter < n) {
			// perform swapping
			int temp = arr[i][j];
			arr[i][j] = arr[j][i];
			arr[j][i] = temp;
			j++;
			counter++;
		}
		i++;
		j = i + 1;
	}
}

void reverse(int arr[][100], int n) {

	int s = 0;
	while (s < n ) {

		int i = 0, j = n - 1;
		while (i < j) {

			int temp = arr[s][i];
			arr[s][i] = arr[s][j];
			arr[s][j] = temp;
			i++;
			j--;
		}
		s++;
	}
}

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

	transpose(arr, n);
	reverse(arr, n);
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}