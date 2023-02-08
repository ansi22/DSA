#include<bits/stdc++.h>
using namespace std;
#define int long long int

const int mod=1e9+7;
const int inf=2e18;

void dijkstra(int start,vector<pair<int,int>> e[],int path[],int n, bool vis[],int parent[]){

     set<pair<int,int>> st;
     st.insert({0,0});
     while(!st.empty()){
          auto top=*st.begin();
          int val=top.second;
          vis[val]=1;
          int dist=top.first;
          path[val]=dist;
          st.erase(st.begin());
          for(int i=0;i<e[val].size();i++){
               if(vis[e[val][i].first]) continue;
               if(dist+e[val][i].second<path[e[val][i].first]){
                    auto x= st.find({path[e[val][i].first],e[val][i].first});
                    if(x!=st.end()) st.erase(x);
                    st.insert({dist+e[val][i].second,e[val][i].first});
                    path[e[val][i].first]=dist+e[val][i].second;
                    parent[e[val][i].first]=val;
               }
          }
     }
}

void solve(){
     int n,m;
     cin>>n>>m;
     int parent[n];
     vector<pair<int,int>> e[n];
     for(int i=0;i<n;i++)
          parent[i]=i;
     for(int i=0;i<m;i++){
          int u,v,w;
          cin>>u>>v>>w;
          u--,v--;
          e[u].push_back(make_pair(v,w));
          e[v].push_back(make_pair(u,w));
     }
     int shortestpath[n];
     for(int i=0;i<n;i++)
          shortestpath[i]=inf;
     shortestpath[0]=0;//distance from self of source(start index) is zero
     int start=0;
     bool vis[n]={0};
     dijkstra(start,e,shortestpath,n,vis,parent);
     if(shortestpath[n-1]!=inf){
          int i=n-1;
          vector<int> v;
          while(parent[i]!=i){
               v.push_back(parent[i]+1);
               i=parent[i];
          }
          for(int i=v.size()-1;i>=0;i--)
               cout<<v[i]<<" ";
          cout<<n<<" ";
          cout<<'\n';
     }
     else cout<<-1<<"\n";
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
