#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define double long double
const int mod=1e9+7;


void solve(){
   
   int n;
   cin>>n;
   // cout<<__gcd(1,2)<<"\n";
   // cout<<(1*1)/(__gcd(1,1))<<"\n";
   if(n==5){
      cout<<1<<" "<<2<<" "<<1<<" "<<1<<"\n";
      return;
   }
   if(n%2!=0){
      int tempo=n-3;
      cout<<2<<" "<<tempo-2<<" "<<2<<" "<<1<<"\n";
   }
   else{
      int tempo=n-2;
      cout<<1<<" "<<tempo-1<<" "<<1<<" "<<1<<"\n";
   }
}

void pre(){}
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
    for(int tc=1;tc<=t;tc++)
    solve();
    return 0;
}