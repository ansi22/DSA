#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define double long double
#define pb push_back

const int max_sz=4e5+7;
const int mod=1e9+7;
const int inf=2e18;
// bool mark[1001][1001];

void solve(){
      int n;
      cin>>n;
      int a[n],ans=inf;
      // cout<<ans<<"\n";
      for(int i=0;i<n;i++)
            cin>>a[i];
      for(int i=0;i<n;i++){
            int tempo=0;
            int prev=0;
            for(int j=i+1;j<n;j++){
                  int sempo=(prev+1+a[j]-1)/a[j];
                  tempo+=sempo;
                  prev=sempo*a[j];
            }
            prev=0;
            for(int j=i-1;j>=0;j--){
                  int sempo=(prev+1+a[j]-1)/a[j];
                  tempo+=sempo;
                  prev=sempo*a[j];
            }
            ans=min(ans,tempo);
      }
      cout<<ans<<"\n";
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
      // cin>>t;
      // pre();
      for(int tc=1;tc<=t;tc++)
      solve();
      return 0;
}