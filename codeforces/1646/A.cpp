#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define int long long int

void solve(){
   
   int n,s;
   cin>>n>>s;
   if(s<n*n) {
   	cout<<0<<"\n";
   	return ;
   }
   else {
   	int tempo=n*n;
   	cout<<s/tempo<<"\n";
   }
   
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
