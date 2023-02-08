#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define double long double
const int mod=1e9+7;


void solve(){
   
   int n;
   cin>>n;
   int a[n];
   map<int,int> mp;
   for(int i=0;i<n;i++){
      cin>>a[i];
      mp[a[i]]++;
   }
   if(mp.size()==1){
      cout<<0<<"\n";
      return;
   }
   int maxi=0;
   for(auto x: mp)
      maxi=max(maxi,x.second);
   int cr=n-maxi,tempo=maxi,ans=0;
   while(cr>0){
      if(tempo==0){
         maxi*=2;
         tempo=maxi;
         ans++;
      }
      else{
         tempo--;
         ans++;
         cr--;
      }
   }
   cout<<ans+1<<"\n";
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
    cin>>t;
    // pre();
    for(int tc=1;tc<=t;tc++)
    solve();
    return 0;
}