#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int MOD = 1e9+7;

template<typename T>
void printv(const vector<T>& v) { for(auto i:v) cout<<i<<' '; cout<<'\n'; }

vector<string> solve(int index){
	if(index==1){
		return {"0", "1"};
	}
	vector<string>v = solve(index-1);
	vector<string>ans(1<<index);
	int i=0, j=ans.size()-1;
	for(auto &k : v){
		ans[i++] = "0"+k;
		ans[j--] = "1"+k;
	}
	return ans;
}

int main()
{
	int n; cin>>n;
	vector<string>ans = solve(n);
	for(auto &i : ans) cout<<i<<'\n';
	cout<<"\n";
	return 0;
}