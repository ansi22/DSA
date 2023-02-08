#include<bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
      cin>>a[i];
    sort(a,a+n);
    bool one=0;
    bool consec=0;
    for(int i=0;i<n;i++){
      if(a[i]==1) one =1;
      if(i<n-1&&a[i]+1==a[i+1]) consec=1;
    }
    if(one&&consec) cout<<"NO\n";
    else cout<<"Yes\n";
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