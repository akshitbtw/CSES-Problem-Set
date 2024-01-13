#include<bits/stdc++.h>
using namespace std;

template<typename T>
void printv(const vector<T>& v) { for(auto i:v) cout<<i<<' '; cout<<'\n'; }

int main()
{
	string s; cin>>s;
	int i=0, ans = 0, n = s.size();
	while(i<n){
		int j = i;
		while(j<n && s[j]==s[i]) j++;
		ans = max(ans, (j-i));
		i=j;
	}	
	cout<<ans;
	cout<<"\n";
	return 0;
}