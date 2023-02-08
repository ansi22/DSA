#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define double long double
#define pb push_back

const int max_sz=4e5+7;
const int mod=1e9+7;
// bool mark[1001][1001];

void solve(){
    
   int n,m;
   cin>>n>>m;
   int a[n];
   for(int i=0;i<n;i++)
    cin>>a[i];
   int ans=0;
   sort(a,a+n);
   reverse(a,a+n);
   if(n>m){ 
      cout<<"NO\n";
      return;
   }
   else{
      ans+=2*a[0];
      // cout<<ans<<"\n";
      for(int i=1;i<n-1;i++)
         ans+=a[i];
      // cout<<ans<<"\n";
      ans+=n;
   }
   // cout<<ans<<"\n";
   if(m>=ans) cout<<"YES\n";
   else cout<<"NO\n";


}

void pre(){
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
    // pre();
    for(int tc=1;tc<=t;tc++)
    solve();
    return 0;
}