#include <bits/stdc++.h>
using namespace std;

void solve() {
	int a[3];
	for(int i=0;i<3;i++) cin>>a[i];
	sort(a,a+3);
	cout<<a[1]<<"\n";
}

int main() {
	// your code goes here
	int t=1;
	cin>>t;
	while(t--) {
		solve();
	}
	return 0;
}
