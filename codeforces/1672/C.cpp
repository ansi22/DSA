#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define double long double
#define pb push_back

const int max_sz=4e5+7;
const int mod=1e9+7;
const int inf=2e18;

void solve(){
      int n;
      cin>>n;
      int a[n];
      vector<int> check;
      for(int i=0;i<n;i++){
            cin>>a[i];
      }
      int x=0;
      for(int i=0;i<n;i++){
            int cnt=0;
            while(a[i]==a[i+1]){
                  cnt++;
                  i++;
            }
            // if(cnt) 
            check.pb(cnt+1);
      }
      // for(auto x: check) cout<<x<<" ";
      //       cout<<"\n";
      int m=check.size(),st=0,en=0;
      for(int i=0;i<m;i++){
            if(check[i]>1) {
                  st=i;break;
            }
      }
      for(int i=m-1;i>=0;i--){
            if(check[i]>1){
                  en=i;break;
            }
      }
      int tempo=0;
      for(int i=st;i<=en;i++){
            tempo+=check[i];
      }
      if(tempo<=2) cout<<0<<"\n";
      else if(tempo>2&&tempo<=4) cout<<1<<"\n";
      else cout<<tempo-3<<"\n";

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