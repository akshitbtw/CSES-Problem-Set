#include<bits/stdc++.h>
using namespace std;

template<typename T>
void printv(const vector<T>& v) { for(auto i:v) cout<<i<<' '; cout<<'\n'; }

int main()
{
	int n; cin>>n;
	vector<int>hash(n+1, 0);
	int x;
	for(int i=0; i<n-1; i++){
		cin>>x;
		hash[x]=1;
	}	
	for(int i=1; i<=n; i++){
		if(!hash[i]){
			cout<<i;
			break;
		}
	} 
	cout<<"\n";
	return 0;
}