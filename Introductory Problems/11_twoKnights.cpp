#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int MOD = 1e9+7;

template<typename T>
void printv(const vector<T>& v) { for(auto i:v) cout<<i<<' '; cout<<'\n'; }

int main()
{
	int n; cin>>n;
	for(ll i=1; i<=n; i++){
		ll total_ways = ((i*i)*((i*i)-1))/2;
		total_ways -= (4*(i-1)*(i-2));
		cout<<total_ways<<endl;		
	}
	cout<<"\n";
	return 0;
}