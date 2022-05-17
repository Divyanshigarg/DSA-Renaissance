// Algorithm for this problem:
// 1. Take the input array and the input k
// 2. Find the total elements which are <= to k
// 3. Make a group of k chunks in contiguous manner
// 4. Find the max elements <=k in each chunk by using a popular technique -> Sliding Window Technique
// 5. Lastly ouptut the total_elements <=k subtracted by the max elements <=k in a window.

#include<bits/stdc++.h>
using namespace std;
int findMin(vector<int>& v, int k) {

	int count = 0;
	for (int i = 0; i < v.size(); ++i)
	{
		if (v[i] <= k) {
			count++;
		}
	}
	return count;
}
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

	// Find the total number of elements less then equal to k and
	// store it into variable min_ele
	int min_ele = findMin(v, k);

	int max_size = INT_MIN;

	int count = 0;
	for (int i = 0; i <= min_ele - 1; i++) {
		if (v[i] <= k) {
			count++;
		}
	}

	for (int j = min_ele; j <= n - 1; j++) {
		if (max_size < count )
			max_size = count;

		if (v[j - min_ele] <= k) {
			count--;
		}

		if (v[j] <= k) {
			count++;
		}

	}

	if (max_size < count) {
		max_size = count;
	}

	cout << min_ele - max_size << endl;
	return 0;

}