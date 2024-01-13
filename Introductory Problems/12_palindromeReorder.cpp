#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int MOD = 1e9+7;

template<typename T>
void printv(const vector<T>& v) { for(auto i:v) cout<<i<<' '; cout<<'\n'; }

void arrangeLetters(string &ans, unordered_map<char, int> &mp, int &n){
	int i=0, j=n-1;
	for(auto &k : mp){
		int freq = k.second;
		while(freq>0){
			ans[i++]=ans[j--]=k.first;
			freq-=2;
		}
	}
}
int main()
{
	string str; cin>>str;
	int n = str.size();
	unordered_map<char,int>mp;
	for(auto &i : str) mp[i]++;
	pair<char,int>p={'0', 0};
	for(auto &i : mp){
		if(i.second&1){
			if(p.first=='0'){
				p.first = i.first;
			} 
			p.second++;
		}
	} 
	string ans(n, '0');
	if(n&1){ // odd length
		if(p.second!=1) cout<<"NO SOLUTION";
		else{
			ans[n/2]=p.first;
			mp[p.first]--;
			arrangeLetters(ans, mp, n);
			cout<<ans;
		}
	}
	else{ // even length
		if(p.second) cout<<"NO SOLUTION";
		else{
			arrangeLetters(ans, mp, n);
			cout<<ans;
		}
	}

	cout<<"\n";
	return 0;
}

/*
even length string - even freq 
odd length string - 1 ki odd, else even

*/