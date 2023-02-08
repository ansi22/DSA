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

void solve(){
   int n,q;
   cin>>n>>q;
   vector<int> a(n);
   for(int i=0;i<n;i++)
      cin>>a[i];
   vector<int> vic;
   vector<vector<int>> dq(n);
   int ind=0;
   for(int i=1;i<n;i++){
      if(a[i]>a[ind]){
         ind=i;
      }
      vic.push_back(ind);
      dq[ind].push_back(i);
   }
   while(q--){
      int i,k;
      cin>>i>>k;
      i--;
      int wins=lower_bound(dq[i].begin(),dq[i].end(),k+1)-dq[i].begin();
      if(i==ind){
         wins+=max(0ll,k-n+1);
      }
      cout<<wins<<"\n";
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
     cin>>t;
     // pre();
     for(int tc=1;tc<=t;tc++)
     solve();
     return 0;
}
