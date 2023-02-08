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

   int n;
   cin>>n;
   int a[n],s=0;
   vector<pair<int,int>> v;
   for(int i=0;i<n;i++) {
       cin>>a[i];
       s+=a[i];
   }
   
   if(s%2!=0) cout<<-1<<"\n";
   else {
     for(int i=0;i<n;i+=2) {
          if(a[i]==a[i+1]) {
               v.push_back({i+1,i+2});
          } else {
               v.push_back({i+1,i+1});
               v.push_back({i+2,i+2});
          }
          
     }

     cout<<v.size()<<"\n";;
     for(auto x: v) {
     cout<<x.first<<" "<<x.second<<"\n";
   }
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
