#include<bits/stdc++.h>
using namespace std;
#define int long long int

const int mod=1e9+7;
const int inf=2e18;

void solve(){
     int n;
     cin>>n;
     string s;
     cin>>s;
     bool vis[26]={0};
     int ans=0;
     for(int i=0;i<n;i++){
          if(vis[s[i]-'A']) ans+=1;
          else{
               ans+=2;
               vis[s[i]-'A']=1;
          }
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
