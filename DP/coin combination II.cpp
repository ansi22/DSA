#include<bits/stdc++.h>
using namespace std;
#define int long long int
const int mod=1e9+7;
vector<vector<int>> dp;

void solve(){

    int n,x;
    cin>>n>>x;
    vector<int> c(n+1);
    for(int i=1;i<=n;i++){
      cin>>c[i];
    }
    
    dp.resize(n+1,vector<int>(x+1, 0));
    for(int i=1;i<=n;i++){
      for(int sum=0;sum<=x;sum++){
         if(sum==0) dp[i][sum]=1;
         else{
            int op1=(c[i]>sum)?0:dp[i][sum-c[i]];
            int op2=(i==1)?0:dp[i-1][sum];
            dp[i][sum]=(op1+op2)%mod;
         }
      }
    }
    cout<<dp[n][x];
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