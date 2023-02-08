#include<bits/stdc++.h>
using namespace std;
#define int long long int
const int mod=1e9+7;

void solve(){

  int n;
  cin>>n;
  int dp[n+1][n*n];
  dp[0][0]=1;
  for(int i=1;i<(n*n)/2;i++)
   dp[0][i]=0;
  for(int i=1;i<=n;i++){
   for(int x=0;x<=((n*(n+1))/4);x++)
      dp[i][x]=(((x<i)?0:dp[i-1][x-i])+dp[i-1][x])%mod;
  }
  if((n*(n+1))%4!=0) {
   cout<<0;
   return;
  }
  int ans=(dp[n][(n*(n+1))/4]*500000004)%mod;
  cout<<ans;
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