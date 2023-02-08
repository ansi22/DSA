#include <bits/stdc++.h>
using namespace std;

#define int long long int

void solve() {
	int n, x;
	cin>>n>>x;
	
	if(n%x!=0) cout<<-1<<"\n";
	else {
		int a[n+1];
		for(int i=1;i<=n;i++) {
			a[i]=i;
		}
		a[1]=x;
		a[n]=1;
		
		for(int i=2*x;i<=n;i+=x) {
			if(n%i==0) {
				a[x]=i;
				x=i;
			}
		}
		
		for(int i=1;i<=n;i++) {
			cout<<a[i]<<" ";
		}
		cout<<"\n";
	}
}

int32_t main() {
	int t;
	cin>>t;
	while(t--) {
		solve();
	}
	return 0;
}
