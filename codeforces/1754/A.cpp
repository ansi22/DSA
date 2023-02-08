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

     int n,a=0;
     cin>>n;

     string s;
     cin>>s;
     

     for(int j=0;j<n;j++) {
          if(s[j]=='Q') a++;
          else if(s[j]=='A') {
               if(a!=0) a--;
          }
     }
     
     if(a<=0) cout<<"Yes\n";
     else cout<<"No\n";

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
