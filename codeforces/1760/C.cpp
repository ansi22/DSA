#include <bits/stdc++.h>
using namespace std;

#define int long long int

void solve() {
	int n;
	cin>>n;
	int a[n], b[n];
	
	for(int i=0;i<n;i++) {
		cin>>a[i];
		b[i]=a[i];
	}
	
	sort(b, b+n);
	int maxi=b[n-1], maxii=b[n-2];
	
	for(int i=0;i<n;i++) {
		if(a[i]==maxi) cout<<a[i]-maxii<<" ";
		else cout<<a[i]-maxi<<" ";
	}
	
	cout<<"\n";
}

int32_t main() {
	int t=1;
	cin>>t;
	while(t--) {
		solve();
	}
	return 0;
}
