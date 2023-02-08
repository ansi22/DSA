// ॐ
#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define int long long int
 
void solve(){
    
    int n;
    cin>>n;
    int a[n],b[n],maxa=INT_MIN,maxb=INT_MIN,ai=0,bi=0;
    for(int i=0;i<n;i++){
    	cin>>a[i];
    	maxa=max(maxa,a[i]);
    } 
    for(int i=0;i<n;i++) {
    	cin>>b[i];
    	maxb=max(maxb,b[i]);
    }
    for(int i=0;i<n;i++){
    	if(a[i]==maxa)
    	{ai=i;break;}
    }
    for(int i=0;i<n;i++){
    	if(b[i]==maxb)
    	{bi=i;break;}
    }
    if(maxa>maxb){
    	for(int i=0;i<n;i++){
    		if(i==ai) continue;
    		if(b[i]>a[i]) swap(a[i],b[i]);
    	}
    	maxb=INT_MIN;
    	 for(int i=0;i<n;i++) {
    	maxb=max(maxb,b[i]);
    }
    cout<<a[ai]*maxb<<"\n";
    return;
    }
    	for(int i=0;i<n;i++){
    		if(i==bi) continue;
    		if(a[i]>b[i]) swap(a[i],b[i]);
    	}
    	maxa=INT_MIN;
    	 for(int i=0;i<n;i++) {
    	maxa=max(maxa,a[i]);
    }
    cout<<b[bi]*maxa<<"\n";
}
 
 
int32_t main(){
 
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin); 
    freopen("output.txt","w",stdout);
    #endif
 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--)
    solve();
    return 0;
}