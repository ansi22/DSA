#include<bits/stdc++.h>
using namespace std;
#define int long long int
const int mod=1e9+7;


void solve(){
   unsigned int w,h,n;
   cin>>w>>h>>n;
   unsigned int st=1,en=1e18,ans=-1;
   while(st<=en){
     unsigned int mid=st+(en-st)/2;
     unsigned int tempo=(mid/w)*(unsigned)(mid/h);
    if(tempo<n) st=mid+1;
    else{
        ans=mid;
        en=mid-1;
    }
   }
   cout<<ans<<"\n";
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
    // cin>>t;
    // pre();
    while(t--)
    solve();
    return 0;
}