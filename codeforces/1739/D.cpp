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

vector<int> g[300010];

int dfs(int node, int par, int depth, int &ans) {
     int curdepth=0;
     for(auto child: g[node]) {
          int val=dfs(child,node,depth,ans);
          curdepth=max(curdepth,val);
     }
     curdepth++;
     if(curdepth==depth&&par>1){
          ans+=1;
          return 0;
     }
     return curdepth;
}

int check(int depth) {
     int ans=0;
     dfs(1,-1,depth,ans);
     return ans;
}

void solve(){
     int n,k;
     cin>>n>>k;
     for(int i=0;i<=n;i++) {
          g[i].clear();
     }
     for(int i=2;i<=n;i++) {
          int x;
          cin>>x;
          g[x].push_back(i);
     }
     int st=1,en=n,ans=n;
     while(st<=en) {
          int mid=(st+en)/2;
          if(check(mid)<=k) {
               ans=min(ans,mid);
               en=mid-1;
          }
          else st=mid+1;
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
