#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int MOD = 1e9+7;

template<typename T>
void printv(const vector<T>& v) { for(auto i:v) cout<<i<<' '; cout<<'\n'; }

int main()
{
	ll n; cin>>n;
	ll sum = (1LL * n * (n+1))/2;
	if(sum&1) cout<<"NO";
	else{
		ll target = sum/2;
		vector<int>hash(n+1, 1);
		ll cnt = 0;
		for(int i=n; i>=1 && target>0; i--){
			if(hash[i] && (target-i)>=0){
				target-=i;
				hash[i]=0;
				cnt++;
			}
		}
		cout<<"YES"<<endl<<cnt<<endl;
		for(int i=1; i<=n; i++) if(!hash[i]) cout<<i<<" ";
		cout<<endl;
		cout<<n-cnt<<endl;
		for(int i=1; i<=n; i++) if(hash[i]) cout<<i<<" ";	
	}	
	cout<<"\n";
	return 0;
}