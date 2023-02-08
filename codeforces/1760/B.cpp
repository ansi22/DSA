#include <bits/stdc++.h>
using namespace std;

#define int long long int

void solve() {
	int n;
	cin>>n;
	string s;
	cin>>s;
	sort(s.begin(), s.end());
	int ans=s[n-1]-'a';
	cout<<ans+1<<"\n";
}

int32_t main() {
	int t=1;
	cin>>t;
	while(t--) {
		solve();
	}
	return 0;
}
