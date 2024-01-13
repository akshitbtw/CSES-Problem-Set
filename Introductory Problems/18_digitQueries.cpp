#include<bits/stdc++.h>
using namespace std;

#define ll unsigned long long
int MOD = 1e9+7;

template<typename T>
void printv(const vector<T>& v) { for(auto i:v) cout<<i<<' '; cout<<'\n'; }

ll calSize(ll num){
	ll cnt = 0;
	while(num){
		cnt++;
		num/=10;
	}
	return cnt;
}
int main()
{
	vector<pair<ll, ll>>v;
	ll p = 0, num=0;
	while(num>=0 && num<1e18){
		num = ceil(pow(10, p++));
		if(num==1) v.push_back({1, 0});
		else{
			ll total = (num-v[v.size()-1].first)*(p-1)+v[v.size()-1].second;
			v.push_back({num, total});
		} 
	}

	int n = v.size();
	int q; cin>>q;
	while(q--){
		ll k; cin>>k;
		ll l = 1, r = 1e18;
		ll ans = 0;
		while(l<=r){
			ll mid = l + (r-l)/2;
			int index = n-1;
			for(int i=0; i<n-1; i++){
				if(mid>=v[i].first && mid<v[i+1].first){
					index = i; break;
				}
			}
			// cout<<"mid --> "<<mid<<" index --> "<<index;
			ll sz = calSize(mid);
			ll prev = v[index].second + ((mid - v[index].first)*sz);
			// cout<<" sz --> "<<sz<<" prev --> "<<prev<<" "<<v[index].first<<" "<<v[index].second<<endl;
			if(prev<k && (prev+sz)>=k){
				ll x = k - prev;
				vector<int>digits;
				ll temp = mid;
				while(temp){
					digits.push_back(temp%10);
					temp/=10;
				}
				int j = digits.size();
				while(x--) j--;
				ans = digits[j];
				break;
			}
			else if(prev>=k) r = mid-1;
			else l = mid + 1;
		}
		cout<<ans;
		cout<<"\n";
	}
	return 0;
}