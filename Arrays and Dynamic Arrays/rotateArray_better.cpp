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

	int temp[n];

	for (int i = 0; i < n ; i++) {
		temp[(i + k) % n] = v[i];
	}

	for (int i = 0; i < n; ++i)
	{
		cout << temp[i] << " ";
	}
	cout << endl;
}
