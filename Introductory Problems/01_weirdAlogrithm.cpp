#include<bits/stdc++.h>
using namespace std;

template<typename T>
void printv(const vector<T>& v) { for(auto i:v) cout<<i<<' '; cout<<'\n'; }

int main()
{
	long long int n; cin>>n;
	while(n!=1){
		cout<<n<<' ';
		if(n&1) n=(3*n)+1;
		else n/=2;
	}
	cout<<1<<' ';
	cout<<"\n";
	return 0;
}