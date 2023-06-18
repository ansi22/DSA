#include <bits/stdc++.h>
using namespace std;

#define int long long int
const int mod = 1e9+7;

void solve() {
	string s, t;
	cin>>s>>t;
	if(s.size()<t.size()) {
		swap(s, t);
	}
	while(t.size()<s.size()) {
		t='0'+t;
	}
	int n=s.size(), ans=0;
	bool found=0;
	for(int i=0;i<n;i++) {
		if(!found) {
			if(s[i]==t[i]) continue;
			ans+=abs(s[i]-t[i]);
			found=1;
		} else ans+=9;
	}
	cout<<ans<<"\n";
	
}

int32_t main() {
	int t;
	cin>>t;
	while(t--) {
		solve();
	}
	return 0;
}
