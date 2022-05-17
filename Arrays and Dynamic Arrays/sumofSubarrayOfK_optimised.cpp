#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;

	vector<int> v;
	for (int i = 0; i < n; ++i)
	{
		int x;
		cin>>x;
		v.push_back(x); 
	}

	int k;
	cin>>k;

	int sum = 0;

	// find the initial sum;
	for(int i=0;i<=k-1;i++){
		sum+=v[i];
	}

	for(int j=k;j<=n-1;j++){

		cout<<sum<<endl;

		sum+=v[j];
		sum-=v[j-k];
	}
	cout<<sum<<endl;
	return 0;
}