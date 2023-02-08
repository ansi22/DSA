#include<bits/stdc++.h>
using namespace std;
#define int long long int
const int mod=1e9+7;
void pre(){}
void solve(){
   
   // at each cell will check either to go down or right
   int n;
   cin>>n;
   bool g[n+1][n+1];
   for(int i=1;i<=n;i++){
      for(int j=1;j<=n;j++){
         char ch;
         cin>>ch;
         if(ch=='.') g[i][j]=0;
         else g[i][j]=1;
      }
   }

   int dp[n+1][n+1];
   memset(dp,0,sizeof(dp));

   for(int i=n;i>=1;i--){
      for(int j=n;j>=1;j--){
         if(i==n&&j==n) dp[i][j]=1;
         else{
            int goright=(j==n)?0:dp[i][j+1];
            int godown=(i==n)?0:dp[i+1][j];
            dp[i][j]=(goright+godown)%mod;
            if(g[i][j]) dp[i][j]=0;
         }
      }
   }
   if(g[n][n]) cout<<0;
   else cout<<dp[1][1];
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
   while(t--)
   solve();
   return 0;
}