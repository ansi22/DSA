#include<bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
   
   int n;
   cin>>n;
   // at each digit we have to check 
   // if we will take particular digit or not
   int dp[n+1];
   memset(dp,0,sizeof(dp));
   dp[0]=0;
   for(int i=1;i<=n;i++){
      int tempo=i;
      int mini=INT_MAX;
      while(tempo!=0){
         int digit=tempo%10;
         tempo/=10;
         if(digit==0) continue;
         mini=min(mini,1+dp[i-digit]);
      }
      dp[i]=mini;
      // cout<<dp[i]<<"\n";
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
   // pre();
   while(t--)
   solve();
   return 0;
}