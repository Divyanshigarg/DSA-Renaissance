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

	int total = 0;

	for (int i = 0; i < n; i++) {
		int sum = 0;
		for (int j = i; j < n; j++) {
			sum += v[j];
			total += sum;
		}
	}

	cout << "Total" << " " << total << endl;
	return 0;
}