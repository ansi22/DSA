#include<bits/stdc++.h>
using namespace std;
#define int long long int

const int mod=1e9+7;
const int inf=2e18;

void solve(){
     int n,m,x,y;
     cin>>n>>m;
     int g[n][m];
     for(int i=0;i<n;i++)
          for(int j=0;j<m;j++)
               cin>>g[i][j];
     int maxi=g[0][0];
     for(int i=0;i<n;i++)
          for(int j=0;j<m;j++)
               maxi=max(maxi,g[i][j]);
     for(int i=0;i<n;i++)
          for(int j=0;j<m;j++){
               if(g[i][j]==maxi){
                    x=max(i+1,n-i);
                    y=max(j+1,m-j);
               }
          }
     cout<<x*y<<"\n";
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
     for(int tc=1;tc<=t;tc++)
     solve();
     return 0;
}
