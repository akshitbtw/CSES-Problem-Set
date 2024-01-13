#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int MOD = 1e9+7;

template<typename T>
void printv(const vector<T>& v) { for(auto i:v) cout<<i<<' '; cout<<'\n'; }

ll solve(int index, ll sum1, ll sum2, vector<int>weights){
	if(index<0){
		if((!sum1 && sum2) || (sum1 && !sum2)) return INT_MAX;
		return abs(sum1-sum2);
	}
	ll l = solve(index-1, sum1+(ll)weights[index], sum2, weights);
	ll r = solve(index-1, sum1, sum2+(ll)weights[index], weights);
	return min(l, r);
}
int main()
{
	int n; cin>>n;
	vector<int>weights(n);
	for(auto &i : weights) cin>>i;
	if(n==1) cout<<weights[0];
	else{
		ll sum1 = 0, sum2 = 0;
		cout<<solve(n-1, sum1, sum2, weights);	
	}
	cout<<"\n";
	return 0;
}