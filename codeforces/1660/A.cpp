#include<bits/stdc++.h>
using namespace std;
#define int long long int
const int mod=1e9+7;
int dp[200005];


void solve(){
    
  int a,b;
  cin>>a>>b;
  if(a==0){
    cout<<1<<"\n";
    return;
  }
  int tempo=a+2*b;
  cout<<tempo+1<<"\n";
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
    while(t--)
    solve();
    return 0;
}