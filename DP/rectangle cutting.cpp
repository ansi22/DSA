#include<bits/stdc++.h>
using namespace std;
#define int long long int
const int mod=1e9+7;
int dp[5001][5001];

int func(int a, int b){
   
   int dp[a+1][b+1];

   for(int h=1;h<=a;h++){
      for(int w=1;w<=b;w++){
         if(h==w) dp[h][w]=0;
         else{
            int ans=INT_MAX;
            //vertical cuts
            for(int i=1;i<w;i++){
               ans=min(ans,1+dp[h][w-i]+dp[h][i]);
            }
            //horizontal cuts
            for(int i=1;i<h;i++){
               ans=min(ans,1+dp[h-i][w]+dp[i][w]);
            }
            dp[h][w]=ans;
         }
      }
   }
    return dp[a][b];
}

void solve(){

   int a,b;
   cin>>a>>b;
   int ans=func(a,b);
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