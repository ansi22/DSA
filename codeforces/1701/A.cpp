#include<bits/stdc++.h>
using namespace std;
#define int long long int

const int mod=1e9+7;
const int inf=2e18;

void solve(){
    int g[2][2],su=0;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cin>>g[i][j];
            su+=g[i][j];
        }
    }
    if(su==0) cout<<0<<"\n";
    else if(su==4) cout<<2<<"\n";
    else cout<<1<<"\n";


}

void pre(){
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
     for(int tc=1;tc<=t;tc++)
     solve();
     return 0;
}
