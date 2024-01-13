#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int MOD = 1e9+7;

template<typename T>
void printv(const vector<T>& v) { for(auto i:v) cout<<i<<' '; cout<<'\n'; }

void solve(int index, int &n, string s, unordered_set<string>&st){
	if(index==n){
		st.insert(s);
		return;
	} 
	for(int i=index; i<n; i++){
		solve(index+1, n, s, st);
		swap(s[i], s[index]);
		solve(index+1, n, s, st);
		swap(s[i], s[index]);
	}
}
int main()
{
	string s; cin>>s;
	unordered_set<string>st;
	int n = s.size();
	solve(0, n, s, st);
	cout<<st.size()<<endl;
	set<string>s1(st.begin(), st.end());
	for(auto &i : s1) cout<<i<<endl;
	cout<<"\n";
	return 0;
}