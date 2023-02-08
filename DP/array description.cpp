#include<bits/stdc++.h>
using namespace std;
#define int long long int
const int mod=1e9+7;

int func(vector<int>& v,int n,int m){
   
   int dp[n+1][m+1];
   memset(dp,0,sizeof(dp));
   int ans=0;
   for(int i=1;i<=n;i++){
      for(int x=1;x<=m;x++){
         if(i==1){
           if(v[i]==0||v[i]==x){
            dp[i][x]=1;
           }
           else dp[i][x]=0;
         }
         else{
           if(v[i]==0||v[i]==x){
             dp[i][x]=((dp[i-1][x-1]+
                      dp[i-1][x])%mod+
                      dp[i-1][x+1])%mod;
           }
           else dp[i][x]=0;
         }
      }
   }
   for(int x=1;x<=m;x++){
      ans=(ans+dp[n][x])%mod;
   }
   return ans;
}

void solve(){

   int n,m;
   cin>>n>>m;
   vector<int> v(n+1);
   for(int i=1;i<=n;i++){
      cin>>v[i];
   }
   int ans=func(v,n,m);
   cout<<ans<<"\n";
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