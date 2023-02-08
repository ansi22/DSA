#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define double long double
#define pb push_back

const int max_sz=4e5+7;
const int mod=1e9+7;
// bool mark[1001][1001];

void solve(){
    
    int n,m;
    cin>>n>>m;
    int ans=0;
    if(n>m) swap(n,m);
    if(n==1&&m>2) {
      cout<<-1<<"\n";
      return;
    }
    if(n-m==0) ans=2*(n-1); 
    else {
      ans=2*m-3;
      if((m-n)%2==0) ans+=1;
    }
    cout<<ans<<"\n";


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