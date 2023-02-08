// ॐ
#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define int long long int
 
void solve(){
   
    string s;
    cin>>s;
    int z=0,o=0,n=s.length();
    for(int i=0;i<n;i++){
    	if(s[i]=='0') z++;
    	else o++;
    }
    if(z==0||o==0) cout<<0<<"\n";
    else if(z>o) cout<<o<<"\n";
    else if(o>z) cout<<z<<"\n";
    else cout<<o-1<<"\n";
    
    
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