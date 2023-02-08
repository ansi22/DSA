#include<bits/stdc++.h>
using namespace std;
#define int long long int
const int mod=1e9+7;
int dp[5001][5001];

int func(int i,int j,string& s,string& p){
   
   int m=s.length();
   int n=p.length();
   int ans;
   if(i==m||j==n){
      return max(n-j,m-i);
   }
   if(dp[i][j]!=-1) return dp[i][j];
   
   if(s[i]==p[j]){
     ans=func(i+1,j+1,s,p);
   }
   else{
     int op1=1+func(i,j+1,s,p);//add
     int op2=1+func(i+1,j,s,p);//remove
     int op3=1+func(i+1,j+1,s,p);//replace
     ans=min({op1,op2,op3});
   }
   return dp[i][j]=ans; 
}

void solve(){

   string s,p;
   cin>>s>>p;
   memset(dp,-1,sizeof(dp));
   int ans=func(0,0,s,p);
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