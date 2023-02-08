#include<bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
   
   int n;
   cin>>n;
   int ans=pow(2,n);
   cout<<ans-1<<"\n";
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
    while(t--)
    solve();
    return 0;
}