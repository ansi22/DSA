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

using namespace std;
#define int long long int

vector<int> g[100001];
int degree[100001];

// topological sort
void solve(){
   int n,m;
   cin>>n>>m;
   // form graph and store indegree of all nodes
   for(int i=0;i<m;i++){
      int u,v;
      cin>>u>>v;
      g[u].push_back(v);
      degree[v]++;
   }
   // push all the nodes with indegree zero into heap
   priority_queue<int, vector<int>,
   greater<int>> zerodegree;
   vector<int> ans;

   for(int i=1;i<=n;i++){
      if(!degree[i]){
         zerodegree.push(i);
      }
   }
   
   // run bfs until all the elements are empty
   // each time popout the top most element of heap 
   // which results in reducing the indegree of all the 
   // nodes connected with it, further push all the nodes 
   // having indegree zero and check until heap turns empty
   while(!zerodegree.empty()){
      auto node= zerodegree.top();
      zerodegree.pop();
      ans.push_back(node);
      for(auto child: g[node]){
         degree[child]--;
         if(!degree[child])
            zerodegree.push(child);
      }
   }
   
   // now if the size of heap is not equal to number of courses
   // that means we can't sort the courses out else we can
   if(ans.size()!=n){
      cout<<"IMPOSSIBLE\n";
   }
   else{
      for(auto x: ans)
         cout<<x<<" ";
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
