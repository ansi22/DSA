#include<bits/stdc++.h>
using namespace std;
#define int long long int
int dp[1000001];
const int mod=1e9+7;

void solve(){
   
   int n,x;
   cin>>n>>x;
   int coin[n];
   for(int i=0;i<n;i++)
      cin>>coin[i];
   memset(dp,0,sizeof(dp));
   dp[0]=1;
   for(int i=1;i<=x;i++){
      for(int j=0;j<n;j++)
         if(coin[j]<=i)
         dp[i]=(dp[i]+dp[i-coin[j]])%mod;
   }
   cout<<dp[x]<<"\n";
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