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

	int k;
	cin >> k;

	int i;
	while (k--) {

		int temp = v[0];
		v[0] = v[n - 1];

		// Performing the operation of shifts.
		for (i = n - 1; i >= 2; i--) {
			v[i] = v[i - 1];
		}
		v[i] = temp;
	}

	for (int i = 0; i < v.size(); ++i)
	{
		cout << v[i] << " ";
	}
	cout << endl;
}
// using the % operator we can optimise the above code;
// int i;
k = 1;
// 	while (k<=k%n) {
// 		int temp = v[0];
// 		v[0] = v[n - 1];

// 		// Performing the operation of shifts.
// 		for (i = n - 1; i >= 2; i--) {
// 			v[i] = v[i - 1];
// 		}
// 		v[i] = temp;
// 		k++
// 	}

// 	for (int i = 0; i < v.size(); ++i)
// 	{
// 		cout << v[i] << " ";
// 	}
// 	cout << endl;
