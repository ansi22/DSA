#include<iostream>
#include<vector>
#include<map>
#include<list>
#include<set>
#include<algorithm>
#include<queue>
#include<stack>
#include<cstring>
#include<cmath>
#include<bitset>
#include<string>
#include<unordered_set>
#include<unordered_map>
#include<cstdlib>
#include<iomanip>

// dijkstra algorithm...
using namespace std;
#define int long long int

vector<vector<pair<int,int>>> graph;
int dist[100001];
const int max_sz=1e18;
int n,m;

void dijkstra(){
   for(int i=0;i<=n;i++){
      dist[i]=max_sz;
   }

   priority_queue<pair<int,int>,
   vector<pair<int,int>>,
   greater<pair<int,int>>> pq;

   dist[1]=0;
   pq.push({0,1});

   while(!pq.empty()){
      int node=pq.top().second;
      int d=pq.top().first;
      pq.pop();
      if(dist[node]<d){
         continue;
      }
      for(auto child: graph[node]){
         int v=child.first;
         int w=child.second;
         if(dist[v]<=w+d)
            continue;
         else{
            dist[v]=w+d;
            pq.push({dist[v],v});
         }
      }
   }

}


void solve(){
   
   cin>>n>>m;

   graph.resize(n+1);
   

   for(int i=0;i<m;i++){
      int u,v,w;
      cin>>u>>v>>w;
      graph[u].push_back({v,w});
   }

   dijkstra();
   for(int i=1;i<=n;i++){
      cout<<dist[i]<<" ";
   }
   
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
     // cin>>t;
     // pre();
     for(int tc=1;tc<=t;tc++)
     solve();
     return 0;
}
