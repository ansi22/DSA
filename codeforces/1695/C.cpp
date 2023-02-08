#include<bits/stdc++.h>
using namespace std;
#define int long long int

const int mod=1e9+7;
const int inf=2e18;

void solve(){
     int n,m;
     cin>>n>>m;
     int g[n][m];
     for(int i=0;i<n;i++)
          for(int j=0;j<m;j++)
               cin>>g[i][j];
     int mn[n][m],mx[n][m];
     
     memset(mn,0,sizeof(mn));
     memset(mx,0,sizeof(mx));

     mn[0][0]=g[0][0];
     mx[0][0]=g[0][0];
     
     for(int i=1;i<n;i++){
          mx[i][0]=mx[i-1][0]+g[i][0];
          mn[i][0]=mn[i-1][0]+g[i][0];
     }
     for(int j=1;j<m;j++){
          mx[0][j]=mx[0][j-1]+g[0][j];
          mn[0][j]=mn[0][j-1]+g[0][j];
     }
          
     for(int i=1;i<n;i++){
          for(int j=1;j<m;j++){
              mx[i][j]+=g[i][j]+max(mx[i-1][j],mx[i][j-1]);
              mn[i][j]+=g[i][j]+min(mn[i-1][j],mn[i][j-1]);
          }
     }
     // cout<<mx[n-1][m-1]%2<<"\n";
     // cout<<mn[n-1][m-1]<<"\n";

     if(mx[n-1][m-1]%2||mn[n-1][m-1]>0||mx[n-1][m-1]<0) cout<<"No\n";
     else cout<<"Yes\n";
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
