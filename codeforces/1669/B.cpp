#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define double long double
#define pb push_back

const int max_sz=4e5+7;
const int mod=1e9+7;
const int inf=2e18;

void solve(){
     int n;
     cin>>n;
     int a[n];
     map<int,int> mp;
     for(int i=0;i<n;i++){
          cin>>a[i];
          mp[a[i]]++;
     }     
     // int check=-1;
     for(auto x: mp){
          if(x.second>=3){
            cout<<x.first<<"\n";
            return;
          }
     }
     cout<<-1<<"\n";
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