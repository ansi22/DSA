#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define double long double
#define pb push_back

const int max_sz=4e5+7;
const int mod=1e9+7;
const int inf=2e18;

void solve(){
      int n,k;
      cin>>n>>k;
      int cnt[31],a[n];
      memset(cnt,0,sizeof(cnt));
      for(int i=0;i<n;i++){
            cin>>a[i];
            for(int j=30;j>=0;j--){
                  if(a[i]&(1<<j)) cnt[j]++;
            }
      }
      int ans=0;
      for(int i=30;i>=0;i--){
            int req=n-cnt[i];
            if(req<=k){
                  k-=req;
                  ans+=(1<<i);
            }
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
      cin>>t;
      // pre();
      for(int tc=1;tc<=t;tc++)
      solve();
      return 0;
}