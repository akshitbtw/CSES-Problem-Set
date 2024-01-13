#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
template<typename T>
void printv(const vector<T>& v) { for(auto i:v) cout<<i<<' '; cout<<'\n'; }

int MOD = 1e9+7;

int main()
{
	ll n; cin>>n;
	ll res = 1;
	while(n--) res = (res*2)%MOD;
	cout<<res;
	return 0;
}