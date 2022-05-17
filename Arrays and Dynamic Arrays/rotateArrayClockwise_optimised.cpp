#include<bits/stdc++.h>
using namespace std;
void reverse(int *arr, int start, int end) {

	for (int i = start, j = end; i < j; i++, j--) {
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}
}
int main() {

	int n;
	cin >> n;

	int *arr = new int[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}

	int k;
	cin >> k;

	reverse(arr, n - k % n, n - 1);
	reverse(arr, 0, n - (k % n) - 1);
	reverse(arr, 0, n - 1);

	for (int i = 0; i < n; ++i)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	delete [] arr;
}