// ॐ
#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define int long long int
 
void solve(){
    
    int l,r,k;
    cin>>l>>r>>k;
    
    int n=r-l+1;
    if(n==1){
        if(l==1) cout<<"NO\n";
        else cout<<"YES\n";
        return;
    }
    if(n%2!=0) {
        if(l%2==0) n-=1;
        else n+=1;
    }
        n/=2;
        if(k>=n) cout<<"YES\n";
        else cout<<"NO\n";
   
   
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