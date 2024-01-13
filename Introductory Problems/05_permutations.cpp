#include<bits/stdc++.h>
using namespace std;

template<typename T>
void printv(const vector<T>& v) { for(auto i:v) cout<<i<<' '; cout<<'\n'; }

int main()
{
	int n; cin>>n;
	if(n==2 || n==3) cout<<"NO SOLUTION";
	else{
		for(int i=2; i<=n; i+=2) cout<<i<<' ';	
		for(int i=1; i<=n; i+=2) cout<<i<<' ';
	}
	cout<<"\n";
	return 0;
}