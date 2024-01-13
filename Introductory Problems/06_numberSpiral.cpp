#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
template<typename T>
void printv(const vector<T>& v) { for(auto i:v) cout<<i<<' '; cout<<'\n'; }

int main()
{
	int t; cin>>t;
	while(t--){
		ll x, y;
		cin>>x>>y;
		ll mx = max({x, y});
		ll diagonal_element = (mx*mx) - (mx-1);
		ll dx = abs(x-mx), dy = abs(y-mx), delta = 0;
		if(dy){ // move towards left
			delta = (mx&1) ? -1 : 1;
			diagonal_element+=(dy*delta);
		}
		else if(dx){ // move towards up
			delta = (mx&1) ? 1 : -1;
			diagonal_element+=(dx*delta);
		}
		cout<<diagonal_element;
		cout<<"\n";
	}	
	return 0;
}

/*

observations

diagonal elements are 1, 3, 7, 13, 21, ...

how to obtain this --> (row no * row no) - (row - 1)

odd indexes me upar ki taraf increment, left side decrement
even indexes me upar ki taraf decrement, left side increment

*/