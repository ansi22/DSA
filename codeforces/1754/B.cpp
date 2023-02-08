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

     int n,x;
     cin>>n;
     x=n/2;
     if(n%2!=0) {
          x+=1;
          while(x!=1) {
               cout<<x<<" "<<n<<" ";
               n--;
               x--;
          }
          cout<<1<<" ";
     } else {
          while(x!=0) {
               cout<<x<<" "<<n<<" ";
               n--;
               x--;
          }
     }
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
