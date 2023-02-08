// ॐ
#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define int long long int

void solve(){
    
    int hc,dc,hm,dm,k,w,a;
    cin>>hc>>dc>>hm>>dm>>k>>w>>a;
    bool ok=0;
    for(int i=0;i<=k;i++){
        int h=hc+a*i;
        int d=dc+(w*(k-i));
        int x,y;
        x=ceil(h/double(dm));
        y=ceil(hm/double(d));
        if(x>=y) ok=1;
    }
    if(ok) cout<<"YES\n";
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

