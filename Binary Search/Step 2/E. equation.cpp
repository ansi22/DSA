#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define double long double
const int mod=1e9+7;

void solve(){
   
   double c;
   cin>>c;
   double st=(double) 0, en=(double) 1e10,ans;
   int tempo=1000;
   while(tempo--){
      double mid=(st+en)/(double) 2.0;
      double x=mid;
      if(x*(double)x+(double)sqrt(x)<c)
         st=mid+1;
      else {
         ans=x;
         en=mid-1;
      }
   }
   cout<<fixed<<setprecision(12)<<ans<<"\n";
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