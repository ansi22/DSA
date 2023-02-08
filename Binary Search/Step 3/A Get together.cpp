#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define double long double
const int mod=1e9+7;

void solve(){
   
   int n;
   cin>>n;
   int x[n],v[n];
   for(int i=0;i<n;i++)
      cin>>x[i]>>v[i];
   double st=-1e9,en=1e9,ans=(double)1e9;
   int tempo=1000;
   while(tempo--){
      double mid=(double)(st+en)/(double)2.00;
      double a=mid,a1=mid+1e-6;
      double tempo1=0,tempo2=0;
      for(int i=0;i<n;i++)
         tempo1=max(tempo1,(double)abs(x[i]-a)/(double)v[i]);
      for(int i=0;i<n;i++)
         tempo2=max(tempo2,(double)abs(x[i]-a1)/(double)v[i]);
      if(tempo1>tempo2){
         ans=min(ans,tempo1);
         st=mid;
      }
      else{
         ans=min(ans,tempo1);
         en=mid;
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