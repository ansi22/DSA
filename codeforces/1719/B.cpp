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
   int n,k;
   cin>>n>>k;
   if(k%4==0) {
      cout<<"NO\n";return;
   }
   cout<<"YES\n";
   if(k%2!=0){
      for(int i=1;i<n;i+=2){
         cout<<i<<" "<<i+1<<"\n";
      }
   }
   else{
      int check=0;
      for(int i=1;i<=n;i+=2){
         if(check%2==0) cout<<i+1<<" "<<i<<"\n";
         else cout<<i<<" "<<i+1<<"\n";
         check+=1;
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
