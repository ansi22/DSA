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
     int x=2,y=1;
     if(n%2==0){
     for(int i=1;i<=n;i++){
          if(i%2==0) {
            cout<<y<<" ";y+=2;
         }
          else {
            cout<<x<<" ";x+=2;
         }
          
     }
     }
     else{
       cout<<1<<" ";
       x=2;y=3;
       for(int i=2;i<=n;i++){
          if(i%2==0) {
            cout<<y<<" ";y+=2;
         }
          else {
            cout<<x<<" ";x+=2;
         }
          
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
