#include<bits/stdc++.h>
using namespace std;
#define int long long int

const int mod=1e9+7;
const int inf=2e18;

void solve(){
    int n;
    cin>>n;
    if(n%2!=0) cout<<-1<<"\n";
    else{
        cout<<n/2<<" "<<n/2<<" "<<0<<"\n";
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
     // pre();
     for(int tc=1;tc<=t;tc++)
     solve();
     return 0;
}
