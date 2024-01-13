#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int MOD = 1e9+7;

template<typename T>
void printv(const vector<T>& v) { for(auto i:v) cout<<i<<' '; cout<<'\n'; }

int main()
{
	int t; cin>>t;
	while(t--){
		ll a,b; 
		cin>>a>>b;
		if((!a && b) || (a && !b)) cout<<"NO";
		else if(!a && !b) cout<<"YES";
		else{
			ll sum = a+b;
			ll mn = min(a, b);
			ll l = 1, r = mn;
			bool flag = false;
			while(l<=r){
				ll mid = l + (r-l)/2;
				ll total = mid + 2*mid;
				if(total==sum){
					flag = true;
					break;
				}
				else if(total<sum) l = mid + 1;
				else r = mid - 1;
			}
			if(flag) cout<<"YES";
			else cout<<"NO";
		}
		cout<<"\n";
	}
	return 0;
}