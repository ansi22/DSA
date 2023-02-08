#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define double long double
const int mod=1e9+7;

void solve(){
   
    int n,x,y,tempo=0,copy=0;
    cin>>n>>x>>y;
    if(x<y) tempo+=x;
    else tempo+=y;
    copy=1;
    int st=0,en=2e9,ans;
    while(st<=en){
      int mid=st+(en-st)/2;
      int mi=mid;
      int d1=mi/x,d2=mi/y;
      int tot=copy+d1+d2;
      if(tot>=n){
         ans=mid;
         en=mid-1;
      }
      else st=mid+1;
    }
    cout<<tempo+ans<<"\n";
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
    for(int tc=1;tc<=t;tc++)
    solve();
    return 0;
}