#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define double long double
#define pb push_back
// const int mod=1e9+7;
const int mod=32768;
vector<vector<int>> g(mod);
vector<int> p;
vector<int> dist;

void dijkstra(int st,vector<vector<int>>& g){
   dist.clear();
   dist.resize(g.size(),1e18);
   p.clear();
   p.resize(g.size(),-1);
   queue<pair<int,int>> q;
   q.push({dist[st]=0,st});
   while(!q.empty()){
      auto x=q.front();
      q.pop();
      if(x.first!=dist[x.second]) continue;
      for(auto child: g[x.second])
         if(dist[child] > 1+x.first){
            q.push({dist[child]=x.first+1,child});
            p[child]=x.second;
         }
   }
}

void solve(){
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++)
      cin>>a[i];
   for(int i=0;i<n;i++)
      cout<<dist[a[i]]<<" ";
}

void pre(){
   for(int v=0;v<mod;v++){
      g[(v+1)%mod].pb(v);
      g[(v<<1)%mod].pb(v);
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
      // cin>>t;
      pre();
      dijkstra(0,g);
      for(int tc=1;tc<=t;tc++)
        solve();
      return 0;
}