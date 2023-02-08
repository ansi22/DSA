#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define double long double
#define pb push_back
const int mod=1e9+7;


void solve(){
   int n;
   cin>>n;
   int a[n],b[n],ans=0;
   for(int i=0;i<n;i++)
      cin>>a[i];
   for(int i=0;i<n;i++)
      cin>>b[i];
   for(int i=0;i<n;i++){
      if(a[i]<b[i]) continue;
      else swap(a[i],b[i]);
   }
   for(int i=0;i<n-1;i++){
      ans+=abs(a[i+1]-a[i]);
      ans+=abs(b[i+1]-b[i]);
   }
   cout<<ans<<"\n";
}

void pre(){}
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