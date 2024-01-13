#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int MOD = 1e9+7;

template<typename T>
void printv(const vector<T>& v) { for(auto i:v) cout<<i<<' '; cout<<'\n'; }

int main()
{
	int n; cin>>n;
	int cnt = 0;
	while(n){
		cnt+=n/5;
		n/=5;
	}	
	cout<<cnt;
	cout<<"\n";
	return 0;
}