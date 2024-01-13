#include<bits/stdc++.h>
using namespace std;

#define ll long long
int MOD = 1e9+7;

template<typename T>
void printv(const vector<T>& v) { for(auto i:v) cout<<i<<' '; cout<<'\n'; }

void solve(int n, int s, int d, int h, vector<pair<int,int>> &v){
	if(n==1){
		v.push_back({s, d});
		return;
	}
	solve(n-1, s, h, d, v);
	v.push_back({s, d});
	solve(n-1, h, d, s, v);
}
int main()
{
	int n; cin>>n;
	int s = 1, h = 2, d = 3;
	vector<pair<int,int>>v;
	solve(n, s, d, h, v);
	cout<<v.size()<<'\n';
	for(auto &i : v) cout<<i.first<<' '<<i.second<<endl;	
	cout<<"\n";
	return 0;
}