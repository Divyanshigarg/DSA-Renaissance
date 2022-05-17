#include<bits/stdc++.h>
using namespace std;
int main() {

	int n;
	cin >> n;

	int m;
	cin >> m;
	int mood[n + 1];
	for (int i = 1; i <= n; i++) {
		cin >> mood[i];
	}

	int total_happiness = 0;
	// Take each selected subarray
	while (m--) {
		int l, r;
		cin >> l >> r;
		//Need sum from mood l to r to judge => Take or leave
		long long int sum = 0;
		for (int i = l; i <= r; i++) {
			sum += mood[i];
			//*** Always try to estimate max value and if that can exceed limit
		}

		if (sum > 0) {
			total_happiness += sum;
		}
	}

	cout << total_happiness << endl;
}
