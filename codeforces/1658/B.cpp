#include<bits/stdc++.h>
using namespace std;
#define int long long int
const int mod=998244353;
int fact(int n){
    int f=1;
    for (int i=1;i<=n;i++)
        f=(f*i)%mod;                       // exceed 10^9+7
    return f;
}

void solve(){
  
  int n;
  cin>>n;
  if(n%2!=0){
   cout<<0<<"\n";
   return;
  }
  int tempo=n/2;
  int ans=fact(tempo);
  int anss;
  anss=((ans%mod)*(ans%mod))%mod;
  cout<<anss<<"\n";

    
}

int32_t main(){

   #ifndef ONLINE_JUDGE
   freopen("input.txt","r",stdin); 
   freopen("output.txt","w",stdout);
   #endif
   ios_base::sync_with_stdio(false); 
   cin.tie(NULL);

   int t=1;
   cin>>t;
   // pre();
   while(t--)
   solve();
   return 0;
}