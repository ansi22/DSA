#include <bits/stdc++.h>
using namespace std;

#define int long long int

void solve() {
	string s;
	cin>>s;
	sort(s.begin(), s.end());
	
	string p=s;
	reverse(p.begin(), p.end());
	s+=p;
	
	cout<<s<<"\n";
}

int32_t main() {
	int t;
	cin>>t;
	while(t--) {
		solve();
	}
	return 0;
}
