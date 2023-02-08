#include <bits/stdc++.h>
using namespace std;

#define int long long int


void solve() {
	int n, c, d;
	cin>>n>>c>>d;
	
	vector<int> a(n);
	for(int i=0;i<n;i++) {
		cin>>a[i];
	}
	
	sort(a.begin(), a.end());
	reverse(a.begin(), a.end());
	
	// int s=accumulate(a.begin(), a.begin()+min(n,d), 0);
	
	// if(s>=c) {
	// 	cout<<"Infinity\n";
	// 	return;
	// }
	int s=0;
	for(int i=0;i<n;i++) {
		s+=a[i];
		if(s>=c&&i<d) {
			cout<<"Infinity\n";
			return;
		}
	}
	
	if(d*a[0]<c) {
		cout<<"Impossible\n";
		return;
	} 
	
	int st=1, en=d, ans=-1;
	
	while(st<=en) {
		int mid=st+(en-st)/2;
		
		vector<int> b;
		b=a;
		b.resize(mid);
		
		s=0;
		for(int i=0;i<d;i++) {
			s+=b[i%mid];
		}
		if(s>=c) {
			ans=mid;
			st=mid+1;
		} else{
			en=mid-1;
		}
	}
	
	cout<<ans-1<<"\n";
}

int32_t main() {
	int t=1;
	cin>>t;
	while(t--) {
		solve();
	}
	return 0;
}
