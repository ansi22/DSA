// ॐ
#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define int long long int

void solve(){
    
   int n;
   cin>>n;
   string s;
   cin>>s;
   if(n==1){
   	cout<<"YES\n";
   	return;
   }
   if(n==2&&s[0]!=s[1]){
   	cout<<"YES\n";
   	return;
   }
   cout<<"NO\n";
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