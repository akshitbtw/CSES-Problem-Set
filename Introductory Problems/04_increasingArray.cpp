#include<bits/stdc++.h>
using namespace std;

template<typename T>
void printv(const vector<T>& v) { for(auto i:v) cout<<i<<' '; cout<<'\n'; }

int main()
{
	int n; cin>>n;
	vector<int>arr(n, 0);
	for(auto &i : arr) cin>>i;
	long long int ans = 0;
	for(int i=1; i<n; i++){
		if(arr[i-1]>arr[i]){
			int diff = arr[i-1]-arr[i];
			ans+=diff;
			arr[i]=arr[i-1];	
		}
	}	
	cout<<ans;
	cout<<"\n";
	return 0;
}