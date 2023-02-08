#include<bits/stdc++.h>
using namespace std;
#define int long long int
const int mod=1e9+7;
void pre(){}
void solve(){

   int n,x;
   cin>>n>>x;
   vector<int> price(n+1);//weight
   vector<int> pages(n+1);//value
   for(int i=1;i<=n;i++) cin>>price[i];
   for(int i=1;i<=n;i++) cin>>pages[i];

   int dp[n+1][x+1];//n books and x amount of money, max pages we can buy
   
   for(int i=0;i<=n;i++){
      for(int amount=0;amount<=x;amount++){
         if(amount==0||i==0) dp[i][amount]=0;
         else{
            int op1=(i==1)?0:dp[i-1][amount];
            int op2=(amount<price[i])?0:pages[i]+dp[i-1][amount-price[i]];
            dp[i][amount]=max(op1,op2);
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