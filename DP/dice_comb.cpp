#include<bits/stdc++.h>
using namespace std;
#define int long long int
int dp[1000001];
const int mod=1e9+7;

void solve(){
   
   int n;
   cin>>n;
   int dp[n+1];
   memset(dp,0,sizeof(dp));
   dp[0]=1;
   for(int i=1;i<=n;i++){
       for(int dice=1;dice<=6;dice++){
         if(dice>i) break;
         dp[i]=(dp[i]+dp[i-dice])%mod;
       }
   }
   cout<<dp[n];
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
   while(t--)
   solve();
   return 0;
}