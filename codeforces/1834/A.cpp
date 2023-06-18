#include <bits/stdc++.h>
using namespace std;

#define int long long int
const int mod = 1e9+7;

void solve() {
   int n;
   cin>>n;
   int a[n], m=0, p=0;
   for(int i=0;i<n;i++) {
   	cin>>a[i];
   	if(a[i]<0) m++;
   	else p++;
   }
   if(p==m) {
   	if(p%2==0) {
   		cout<<0<<"\n";
   	} else {
   		cout<<1<<"\n";
   	}
   } else if(p>m) {
   	if(m%2==0) {
   		cout<<0<<"\n";
   	} else {
   		cout<<1<<"\n";
   	}
   } else if(p<m) {
   	int x=m-p;
   	int z=ceil(x/2.0);
   	if((m-z)%2!=0) z+=1;
   	cout<<z<<"\n";
   	
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
