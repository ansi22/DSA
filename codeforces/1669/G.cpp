#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define double long double
#define pb push_back

const int max_sz=4e5+7;
const int mod=1e9+7;
const int inf=2e18;

void solve(){
     int n,m;
     cin>>n>>m;
     char s[n+7][m];
     for(int i=0;i<n;i++){
      for(int j=0;j<m;j++)
          cin>>s[i][j];
     }
     for(int j=0;j<m;j++){
       int k=n-1;
     for(int i=n-1;i>=0;i--){
            // cout<<s[i][j]<<" ";
                  // cout<<k<<"\n";/
                  if(s[i][j]=='o') k=i-1;
                  // cout<<i<<"\n";
                  // cout<<k<<"\n";
                  else if(s[i][j]=='*'){ 
                        swap(s[i][j],s[k][j]);
                        k--;
                  }
                        // cout<<1<<"\n";
            }
     }
     for(int i=0;i<n;i++){
          for(int j=0;j<m;j++)
            cout<<s[i][j];
          cout<<"\n";
     }
     cout<<"\n";
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