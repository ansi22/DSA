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
   int ans=0,xn=0,xp=0,yn=0,yp=0;
   for(int i=0;i<n;i++){
      int x,y;
      cin>>x>>y;
      if(y>0) yp=max(yp,y);
      if(x>0) xp=max(xp,x);
      if(y<0) yn=max(yn,abs(y));
      if(x<0) xn=max(xn,abs(x));
   }
   ans=(yp+xp+yn+xn)*2;
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
