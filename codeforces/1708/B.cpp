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

// const int mod=1e9+7;
// const int inf=2e18;


void solve(){
	int n,l,r;
     cin>>n>>l>>r;
     vector<int> v;
     for(int i=0;i<n;i++){
          if(l%(i+1)==0){
               v.push_back(l);
          }
          else{
               int check=l/(i+1);
               check+=1;
               if((i+1)*check<=r)
                    v.push_back(check*(i+1));
               else{
                    cout<<"NO\n";return;
               }

          }
     }
     cout<<"YES\n";
     for(auto x: v)
          cout<<x<<" ";
     cout<<"\n";
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
