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
      int a[n],su=0;
      for(int i=0;i<n;i++){
            cin>>a[i];
            // if(a[i]==1) continue;
            su+=a[i]-1;
      }
      // if(su==0) cout<<"maomao90\n";
      if(su%2!=0)  cout<<"errorgorn\n";
      else cout<<"maomao90\n";
      
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